#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <stdio.h>
#include <iostream>
#include <typeinfo>

#include <memory>

#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_msgs/msg/collision_object.hpp>
#include <moveit/planning_scene/planning_scene.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "rclcpp/rclcpp.hpp"
#include "ur_custom_interfaces/msg/ur_command.hpp"
#include "visualization_msgs/msg/marker.hpp"
/* 추가한 부분 시작 */
#include "interfaces_ur5ik/srv/six_theta.hpp"
#include <geometry_msgs/msg/pose.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <moveit/robot_state/robot_state.h>
#include <moveit/robot_trajectory/robot_trajectory.h>
#include <moveit/trajectory_processing/iterative_time_parameterization.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <moveit_msgs/msg/attached_collision_object.hpp>


#include <moveit_visual_tools/moveit_visual_tools.h>

using std::placeholders::_1;

using namespace std::chrono_literals;

using moveit::planning_interface::MoveGroupInterface;
/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

#define camera 0
double theta[6] = { 0 };
double pi = 3.141592;
double count = 0;
double i = 0;
class RobotMasterController : public rclcpp::Node
{
  public:
    RobotMasterController(std::shared_ptr<rclcpp::Node> move_group_node, geometry_msgs::msg::Pose* lookout_pos, geometry_msgs::msg::Pose* apple_drop_pos)
    : Node("master_node"), is_lookout_position(false), is_horizontally_centered(false), 
    is_vertically_centered(false), is_moving(false), lookout_pos(lookout_pos), target_pose(*lookout_pos), prev_x(0),
    is_depth_reached(false), was_centered_message_shown(false), depth(0.0), apple_drop_pose(apple_drop_pos), is_at_apple_position(false), 
    is_apple_grabbed(false), is_apple_picked(false), is_with_apple_at_lookout_position(false)
    {
      _publisher_joint_trajectory = this->create_publisher<trajectory_msgs::msg::JointTrajectory>("/arm_controller/joint_trajectory",10);
      publisher = this->create_publisher<std_msgs::msg::String>("/custom_gripper", 1);
      RCLCPP_INFO(this->get_logger(), "Publisher on custom_gripper created");

/* 추가한 부분 시작 */
      service_client_ = this->create_client<interfaces_ur5ik::srv::SixTheta>("service_ik");
      RCLCPP_INFO(this->get_logger(), "Service client ur5 inverse kinematics");
/* 추가한 부분 끝*/
      move_group_ = new moveit::planning_interface::MoveGroupInterface(move_group_node, "ur_manipulator");
/* 추가한 부분 시작 */
      //send_request();
/* 추가한 부분 끝*/
      auto const robot_pos = move_group_->getCurrentPose("wrist_3_link");
       RCLCPP_INFO(this->get_logger(), "Trajectory time parameterization success.");
     //move_initial_position3();

        marker_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("visualization_marker", 10);
        publish_sphere();
     send_request();
    }

  private:
    void publish_sphere() {
        visualization_msgs::msg::Marker marker;
        marker.header.frame_id = "world";
        marker.header.stamp = this->now();
        marker.ns = "sphere";
        marker.id = 0;
        marker.type = visualization_msgs::msg::Marker::SPHERE;
        marker.action = visualization_msgs::msg::Marker::ADD;

        // Set the pose of the marker. This is a full 6DOF pose relative to the frame/time specified in the header
        marker.pose.position.x = 0.0;
        marker.pose.position.y = 0.5;
        marker.pose.position.z = 0.0;
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;

        // Set the scale of the marker -- 1x1x1 here means 1m on each side
        marker.scale.x = 0.5;
        marker.scale.y = 0.5;
        marker.scale.z = 0.5;

        // Set the color -- be sure to set alpha to something non-zero!
        marker.color.r = 0.0f;
        marker.color.g = 1.0f;
        marker.color.b = 0.0f;
        marker.color.a = 1.0;

        marker.lifetime = rclcpp::Duration::from_seconds(0); // Marker lasts forever

        marker_publisher_->publish(marker);
    }
      void planAndExecute() {
        // UR5의 조인트 이름 설정

        const std::vector<std::string> joint_names = {
            "shoulder_pan_joint",
            "shoulder_lift_joint",
            "elbow_joint",
            "wrist_1_joint",
            "wrist_2_joint",
            "wrist_3_joint"
        };

        // JointTrajectory 메시지 생성
        trajectory_msgs::msg::JointTrajectory joint_trajectory;
        joint_trajectory.joint_names = joint_names;

        // 첫 번째 포인트: 현재 위치
        trajectory_msgs::msg::JointTrajectoryPoint point1;
        point1.positions = move_group_->getCurrentJointValues();
        point1.time_from_start = rclcpp::Duration::from_seconds(1.0);
        joint_trajectory.points.push_back(point1);

        // 두 번째 포인트: Shoulder Pan 조인트를 0.2 라디안 회전
        trajectory_msgs::msg::JointTrajectoryPoint point2 = point1;
        point2.positions[0] += -1.0;  
        point2.positions[1] += 0.0;  
        point2.positions[2] += 0.0;  
        point2.positions[3] += 0.0;  
        point2.positions[4] += 0.0; 
        point2.positions[5] += 0.0;  
        point2.time_from_start  = rclcpp::Duration::from_seconds(3.0);
        joint_trajectory.points.push_back(point2);

        // 세 번째 포인트: Shoulder Lift 조인트를 -0.2 라디안 회전
        trajectory_msgs::msg::JointTrajectoryPoint point3 = point2;
        point3.positions[0] += 1.0;  
        point3.positions[1] += 0.0;  
        point3.positions[2] += 0.0; 
        point3.positions[3] += 0.0;  
        point3.positions[4] += 0.0;
        point3.positions[5] += 0.0;  
        point3.time_from_start = rclcpp::Duration::from_seconds(5.0);
        joint_trajectory.points.push_back(point3);

        // 네 번째 포인트: Elbow 조인트를 0.1 라디안 회전
        trajectory_msgs::msg::JointTrajectoryPoint point4 = point3;
        point4.positions[0] += -1.0;  
        point4.positions[1] += 0.0;
        point4.positions[2] += 0.0;  
        point4.positions[3] += 0.0;  
        point4.positions[4] += 0.0;  
        point4.positions[5] += 0.0;  
        point4.time_from_start = rclcpp::Duration::from_seconds(7.0);
        joint_trajectory.points.push_back(point4);

        trajectory_msgs::msg::JointTrajectoryPoint point5 = point4;
        point5.positions[0] += 1.0;  
        point5.positions[1] += 0.0;  
        point5.positions[2] += 0.0;  
        point5.positions[3] += 0.0; 
        point5.positions[4] += 0.0;  
        point5.positions[5] += 0.0; 
        point5.time_from_start = rclcpp::Duration::from_seconds(10.0);
        joint_trajectory.points.push_back(point5);
        
        trajectory_msgs::msg::JointTrajectoryPoint point6 = point5;
        point6.positions[0] -= 0.0;
        point6.positions[1] += 0.5;  
        point6.positions[2] += 0.5;  
        point6.positions[3] -= 0.0;  
        point6.positions[4] += 0.0; 
        point6.positions[5] += 0.0;  
        point6.time_from_start = rclcpp::Duration::from_seconds(12.0);
        joint_trajectory.points.push_back(point6);
        // 계획된 궤적을 MoveIt에 전달하여 실행
     
    }
   
void send_request() {
    auto request = std::make_shared<interfaces_ur5ik::srv::SixTheta::Request>();
    if (move_group_ == nullptr) {
        RCLCPP_ERROR(this->get_logger(), "Move group is not initialized!");
        return;
    }
  
    if (service_client_ == nullptr) {
        RCLCPP_ERROR(this->get_logger(), "Service client is not initialized!");
        return;
    }


    while (!service_client_->wait_for_service(std::chrono::seconds(1))) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Waiting for service to be available...");
    }

    auto result = service_client_->async_send_request(request, std::bind(&RobotMasterController::handle_response, this, std::placeholders::_1));
}

void handle_response(rclcpp::Client<interfaces_ur5ik::srv::SixTheta>::SharedFuture future) {
    auto response = future.get();

    if (response->success) {
        RCLCPP_INFO(this->get_logger(), "Received array: [%d, %d, %d, %d, %d, %d]",
                    response->srv_theta[0], response->srv_theta[1], response->srv_theta[2],
                    response->srv_theta[3], response->srv_theta[4], response->srv_theta[5]);

        const std::vector<std::string> joint_names = {
            "shoulder_pan_joint",
            "shoulder_lift_joint",
            "elbow_joint",
            "wrist_1_joint",
            "wrist_2_joint",
            "wrist_3_joint"
        };

        joint_trajectory.joint_names = joint_names;

        // 첫 번째 포인트는 한 번만 추가
        if (joint_trajectory.points.empty()) {
            trajectory_msgs::msg::JointTrajectoryPoint initial_point;
            initial_point.positions = move_group_->getCurrentJointValues();
            initial_point.time_from_start = rclcpp::Duration::from_seconds(1.0);
            joint_trajectory.points.push_back(initial_point);
        }

        trajectory_msgs::msg::JointTrajectoryPoint next_point;
        next_point.positions = {
            response->srv_theta[0],
            response->srv_theta[1],
            response->srv_theta[2],
            response->srv_theta[3],
            response->srv_theta[4],
            response->srv_theta[5]
        };
        next_point.time_from_start = rclcpp::Duration::from_seconds(joint_trajectory.points.size() + 0.5);
        joint_trajectory.points.push_back(next_point);
	
	// 실시간 PID 제어로 짧은 거리에서 실시간 보정
	double position_error = desired_position - current_position;
	double velocity_error = desired_velocity - current_velocity;

	double pid_output = pid_controller.calculate(position_error, velocity_error);

	// 짧은 거리에서도 보정된 위치 적용
	trajectory_msgs::msg::JointTrajectoryPoint corrected_point;
	corrected_point.positions = current_position + pid_output;
	corrected_point.velocities = current_velocity + pid_output_velocity;
	
	// 트래젝토리 점을 실시간으로 수정
	trajectory_msgs::msg::JointTrajectory traj_msg;
	traj_msg.points.push_back(corrected_point);

	// 트래젝토리 메시지 갱신 및 전송
	trajectory_pub->publish(traj_msg);


        send_request(); // 다음 좌표 요청

    } else {
        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        my_plan.trajectory_.joint_trajectory = joint_trajectory;

        bool success = (move_group_->execute(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
        if (success) {
            RCLCPP_INFO(this->get_logger(), "Trajectory execution succeeded.");
        } else {
            RCLCPP_WARN(this->get_logger(), "Trajectory execution failed.");
        }

        RCLCPP_INFO(this->get_logger(), "No more commands to process.");

        // 조인트 트래젝토리 포인트 초기화
        joint_trajectory.points.clear();

        // 서비스 요청 대기
        send_request();
    }
}
 


    void topic_callback(const ur_custom_interfaces::msg::URCommand::SharedPtr msg)
    {
#if camera
      RCLCPP_INFO(this->get_logger(), "=======================================================");
      int x = std::stoi(msg->x);
      int y = std::stoi(msg->y);
      if(!is_moving) {
        depth = sanitize_depth(msg->depth);
      }
      RCLCPP_INFO(this->get_logger(), "Received commands: x:%i, y: %i, depth: %f", x, y, depth);

      if(depth > 0.0 && depth < 0.5){
        depths.push_back(depth);
      }

      if(is_depth_reached && is_horizontally_centered && is_vertically_centered) {
        RCLCPP_INFO(this->get_logger(), "At apple position");
        return;
      }
      
      if(is_moving || !is_lookout_position){
        RCLCPP_INFO(this->get_logger(), "Robot is already moving. Ignoring command.");
        return;
      }
      if(x == 0 && !is_horizontally_centered){
        RCLCPP_INFO(this->get_logger(), "Robot is already centered horizontally. Ignoring command.");
        is_horizontally_centered = true;
        is_moving = false;
        move_group_->stop();
        return;
      }

      if(x == 1 && !is_moving && !is_horizontally_centered){
        target_pose.position.x += 0.01;
        this->move(target_pose, "Moving robot to the right");

      } else if(x == -1 && !is_moving && !is_horizontally_centered){
        target_pose.position.x -= 0.01;
        this->move(target_pose, "Moving robot to the left");
      }

      // MOVING IN Y

      if(!is_horizontally_centered){
        RCLCPP_INFO(this->get_logger(), "Robot is not centered horizontally. Ignoring command.");
        return;
      }

      if(y == 0 && !is_vertically_centered){
        RCLCPP_INFO(this->get_logger(), "Robot is already centered vertically. Ignoring command.");
        is_vertically_centered = true;
        move_group_->stop();
        is_moving = false;
        return;
      }

      if(y == 1 && !is_moving && !is_vertically_centered){
        target_pose.position.z -= 0.01;
        this->move(target_pose, "Moving robot to the bottom");
      } else if(y == -1 && !is_moving && !is_vertically_centered){
        target_pose.position.z += 0.01;
        this->move(target_pose, "Moving robot to the top");
      }
      
      bool const is_robot_centered = is_horizontally_centered && is_vertically_centered;
      if(is_robot_centered && !was_centered_message_shown) {
        RCLCPP_INFO(this->get_logger(), "Robot is centered. Started timer.");
        was_centered_message_shown = true;
        end_timer = this->get_clock()->now() + rclcpp::Duration(3s);
      }
      else if(!is_robot_centered) {
        return;
      }
      timer = this->get_clock()->now();

      if(timer < end_timer) {
        return;
      }

      if(depth < 0.01) {
        RCLCPP_INFO(this->get_logger(), "Depth too small. Awaiting another reading.");
        return;
      }
      if (depth > 0.8) {
        RCLCPP_INFO(this->get_logger(), "Depth too big. Awaiting another reading.");
        return;
      }

      // Reaching the apple
      if(!is_moving && !is_depth_reached) {

        // including camera offset
        target_pose.position.z += 0.18;
        bool const offset_res = this->move(target_pose, "Applying camera offset");
        if(offset_res){
          RCLCPP_INFO(this->get_logger(), "Applied camera offset");
        }
        else {
          RCLCPP_INFO(this->get_logger(), "Could not apply camera offset. Shutting down.");
          rclcpp::shutdown();
        }
        
        RCLCPP_INFO(this->get_logger(), "Moving robot forward by %f", depth);
        float camera_offset = 0.11;
        float gripper_offset = 0.00;
        target_pose.position.y += depth - camera_offset - gripper_offset;
        // shouldn't be hardcoded - offset in x when reaching apple
        target_pose.position.x -= 0.03;

        bool const forward_res = this->move(target_pose, "Moving robot forward");

        if(forward_res){
          is_depth_reached = true;
          RCLCPP_INFO(this->get_logger(), "Arrived at apple position.");
        }
        else {
          RCLCPP_INFO(this->get_logger(), "Could not arrive at apple position. Shutting down.");
          rclcpp::shutdown();
        }
      }

      // Grabbing the apple
      if(is_depth_reached && !is_apple_grabbed){
        RCLCPP_INFO(this->get_logger(), "About to close gripper");
        rclcpp::sleep_for(1s);
        publisher->publish(std_msgs::msg::String().set__data("close"));
        rclcpp::sleep_for(5s);
        RCLCPP_INFO(this->get_logger(), "Gripper closed");
        is_apple_grabbed = true;
      }


      // Picking the apple
      if(is_apple_grabbed && !is_moving){
        target_pose.position.z += 0.03;
        target_pose.position.y -= 0.07;
        bool const backward_res = this->move(target_pose, "Picking the apple");
        if(backward_res){
          is_apple_picked = true;
          RCLCPP_INFO(this->get_logger(), "Position after picking an apple");
        }
        else {
          RCLCPP_INFO(this->get_logger(), "Could not pick an apple. Shutting down.");
          rclcpp::shutdown();
        }
      }

          RCLCPP_INFO(this->get_logger(), "Before going to lookout position with apple");
      // Going back to lookout position with apple
      if(is_apple_picked && !is_moving){
        this->move_to_lookout_position();
          RCLCPP_INFO(this->get_logger(), "Going to lookout position");
        is_with_apple_at_lookout_position = true;
      }
          RCLCPP_INFO(this->get_logger(), "After going to lookout position with apple");

      // Moving to drop apple position & dropping the apple
      if(is_with_apple_at_lookout_position && !is_moving){
        bool const apple_lookout_pose_res = this->move(*apple_drop_pose, "Moving to apple drop position");

        if(apple_lookout_pose_res){
          RCLCPP_INFO(this->get_logger(), "Arrived at apple drop position.");
          rclcpp::sleep_for(1s);
          publisher->publish(std_msgs::msg::String().set__data("open"));
          rclcpp::sleep_for(5s);
          reset_robot_loop();
          this->move_to_lookout_position();
          target_pose = *lookout_pos;
          rclcpp::sleep_for(1s);
        }
        else {
          RCLCPP_INFO(this->get_logger(), "Could not arrive at apple drop position. Shutting down.");
          rclcpp::shutdown();
        }
      }
#endif
    }


    void move_to_lookout_position(){
      RCLCPP_INFO(this->get_logger(), "=======================================================");
      bool const move_res = move(*lookout_pos, "Moving to lookout position");
      if(move_res){
        is_lookout_position = true;
        RCLCPP_INFO(this->get_logger(), "Arrived at lookout position.");
      }
      else {
        RCLCPP_INFO(this->get_logger(), "Could not arrive at lookout position. Shutting down.");
        rclcpp::shutdown();
      }

    }

    void reset_robot_loop(){
      is_lookout_position = false;
      is_horizontally_centered = false;
      is_vertically_centered = false;
      is_moving = false;
      is_depth_reached = false;
      is_at_apple_position = false;
      is_apple_grabbed = false;
      is_apple_picked = false;
      is_with_apple_at_lookout_position = false;
      was_centered_message_shown = false;
      depths.clear();
      prev_x = 0;
      this->move_to_lookout_position();
    }

    float sanitize_depth(std::string raw_depth){
      float depth = std::stof(raw_depth) / 1000;
      if(depth > 0.8){
        depth = 0.8;
      }
      else if(depth < 0){
        depth = 0;
      }
      return depth;
    }

    bool move(geometry_msgs::msg::Pose target_pose, const char * log_message = "Moving robot"){
      is_moving = true;
      moveit::planning_interface::MoveGroupInterface::Plan my_plan;
      move_group_->setEndEffectorLink("wrist_3_link");

      double eef_step = 0.01; // Rozdzielczość trajektorii
      auto res = move_group_->computeCartesianPath(std::vector<geometry_msgs::msg::Pose> {target_pose}, eef_step, 0.0, my_plan.trajectory_);
      RCLCPP_INFO(this->get_logger(), log_message);

      if (res != -1) {
        auto move_res = move_group_->execute(my_plan);
          if(move_res == moveit::planning_interface::MoveItErrorCode::SUCCESS){
            is_moving = false;
            RCLCPP_INFO(this->get_logger(), "Execution successful for the waypoint.");
            return true;
          } else {
            RCLCPP_ERROR(this->get_logger(), "Execution failed for the waypoint.");
          }
        } else {
          RCLCPP_ERROR(this->get_logger(), "Failed to plan the trajectory");
        }
        is_moving = false;
        return false;
    }

    bool move(std::vector<geometry_msgs::msg::Pose> target_poses, const char * log_message = "Moving robot"){
      is_moving = true;
      moveit::planning_interface::MoveGroupInterface::Plan my_plan;
      move_group_->setEndEffectorLink("wrist_3_link");

      double eef_step = 0.01; // Rozdzielczość trajektorii
      auto res = move_group_->computeCartesianPath(target_poses, eef_step, 0.0, my_plan.trajectory_);
      RCLCPP_INFO(this->get_logger(), log_message);

      if (res != -1) {
        auto move_res = move_group_->execute(my_plan);
          if(move_res == moveit::planning_interface::MoveItErrorCode::SUCCESS){
            is_moving = false;
            RCLCPP_INFO(this->get_logger(), "Execution successful for the waypoint.");
            return true;
          } else {
            RCLCPP_ERROR(this->get_logger(), "Execution failed for the waypoint.");
          }
        } else {
          RCLCPP_ERROR(this->get_logger(), "Failed to plan the trajectory");
        }
        is_moving = false;
        return false;
    }
    trajectory_msgs::msg::JointTrajectory joint_trajectory;
    rclcpp::Subscription<ur_custom_interfaces::msg::URCommand>::SharedPtr subscription_;
    bool is_lookout_position;
    bool is_horizontally_centered;
    bool is_vertically_centered;
    bool is_moving;
    bool is_depth_reached;
    bool is_at_apple_position;
    bool is_apple_grabbed;
    bool is_apple_picked;
    bool is_with_apple_at_lookout_position;
    int prev_x;
    bool was_centered_message_shown;
    float depth;
    std::vector<float> depths;
    rclcpp::Time end_timer;
    rclcpp::Time timer;
    geometry_msgs::msg::Pose* lookout_pos;
    geometry_msgs::msg::Pose* apple_drop_pose;
    moveit::planning_interface::MoveGroupInterface* move_group_;
    geometry_msgs::msg::Pose target_pose;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher;
    std::vector<geometry_msgs::msg::Pose> waypoints;
    /* 추가한 부분 시작 */
    rclcpp::Client<interfaces_ur5ik::srv::SixTheta>::SharedPtr service_client_;
    rclcpp::CallbackGroup::SharedPtr client_cb_group_;
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr position_sub_;
    rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr _publisher_joint_trajectory;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_publisher_;
    /* 추가한 부분 끝*/
};

int main(int argc, char * argv[])
{

    geometry_msgs::msg::Pose lookout_pos;
  lookout_pos.orientation.w = 0.700288;
  lookout_pos.orientation.x = -0.713574;
  lookout_pos.orientation.y = 0.002969;
  lookout_pos.orientation.z = -0.019990;
  lookout_pos.position.x = -0.131775;
  lookout_pos.position.y = -0.127100;
  lookout_pos.position.z = 0.571933-0.15;

    geometry_msgs::msg::Pose apple_drop_pos;
  apple_drop_pos.orientation.w = 0.475287;
  apple_drop_pos.orientation.x = -0.504723;
  apple_drop_pos.orientation.y = -0.495298;
  apple_drop_pos.orientation.z = 0.523485;
  apple_drop_pos.position.x = -0.229409;
  apple_drop_pos.position.y = -0.251604;
  apple_drop_pos.position.z = 0.561635-0.15;


  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);

  auto move_robot_node = rclcpp::Node::make_shared("move_robot", node_options);
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(move_robot_node);
  std::thread spinner = std::thread([&executor]() { executor.spin(); });

  rclcpp::spin(std::make_shared<RobotMasterController>(move_robot_node, &lookout_pos, &apple_drop_pos));
  rclcpp::shutdown();
  return 0;
}
