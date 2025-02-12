#include <stdio.h>
#include <iostream>
#include <math.h>
#include <sstream>

#include <memory>
#include <string>
#include <chrono>
#include <string>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "interfaces_ur5ik/srv/six_theta.hpp"

using namespace std::chrono_literals;



struct customNode {
    double data[6]; // 크기 6인  array
    customNode* next;

    customNode(double val[]) {
        for (int i = 0; i < 6; i++) {
            data[i] = val[i];
        }
        next = nullptr;
    }
};

class LinkedList {
public:
    customNode* head;

    LinkedList() : head(nullptr) {}

    void append(double val[]) {
        customNode* newNode = new customNode(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            customNode* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    customNode* getHead() {
        return head;
    }
};


class ArrayServiceServer : public rclcpp::Node {
public:
    ArrayServiceServer() : Node("array_service_server"), current_node(nullptr) {
    service_client_ = this->create_service<interfaces_ur5ik::srv::SixTheta>("service_ik",std::bind(&ArrayServiceServer::handle_request, this, std::placeholders::_1, std::placeholders::_2));
    RCLCPP_INFO(this->get_logger(), "Service client ur5 inverse kinematics");
    timer_ = this->create_wall_timer(500ms, std::bind(&ArrayServiceServer::publish_next_position, this)); 
    object_position_pub_ = this->create_publisher<std_msgs::msg::Float64MultiArray>("object_position",10);
        // 링크드 리스트 초기화
        double arr1[6] = {0.0, -0.5, 0.42, 3.14, 0.0, 0.0};
        double arr2[6] = {0.004545, -0.5, 0.4178, 3.1217, 0.0, 0.0};
        double arr3[6] = {0.009091, -0.5, 0.4156, 3.1033, 0.0, 0.0};
        double arr4[6] = {0.013636, -0.5, 0.4134, 3.0850, 0.0, 0.0};
        double arr5[6] = {0.018182, -0.5, 0.4112, 3.0667, 0.0, 0.0};
        double arr6[6] = {0.022727, -0.5, 0.4090, 3.0483, 0.0, 0.0};
        double arr7[6] = {0.027273, -0.5, 0.4068, 3.0300, 0.0, 0.0};
        double arr8[6] = {0.031818, -0.5, 0.4046, 3.0117, 0.0, 0.0};
        double arr9[6] = {0.036364, -0.5, 0.4024, 2.9933, 0.0, 0.0};
        double arr10[6] = {0.040909, -0.5, 0.4002, 2.9750, 0.0, 0.0};
        double arr11[6] = {0.045455, -0.5, 0.3980, 2.9567, 0.0, 0.0};
        double arr12[6] = {0.050000, -0.5, 0.3958, 2.9383, 0.0, 0.0};
        double arr13[6] = {0.054545, -0.5, 0.3936, 2.9200, 0.0, 0.0};
        double arr14[6] = {0.059091, -0.5, 0.3914, 2.9017, 0.0, 0.0};
        double arr15[6] = {0.063636, -0.5, 0.3892, 2.8833, 0.0, 0.0};
        double arr16[6] = {0.068182, -0.5, 0.3870, 2.8650, 0.0, 0.0};
        double arr17[6] = {0.072727, -0.5, 0.3848, 2.8467, 0.0, 0.0};
        double arr18[6] = {0.077273, -0.5, 0.3826, 2.8283, 0.0, 0.0};
        double arr19[6] = {0.081818, -0.5, 0.3804, 2.8100, 0.0, 0.0};
        double arr20[6] = {0.086364, -0.5, 0.3782, 2.7917, 0.0, 0.0};
        double arr21[6] = {0.090909, -0.5, 0.3760, 2.7733, 0.0, 0.0};
        double arr22[6] = {0.095455, -0.5, 0.3738, 2.7550, 0.0, 0.0};
        double arr23[6] = {0.100000, -0.5, 0.3716, 2.7367, 0.0, 0.0};
        double arr24[6] = {0.104545, -0.5, 0.3694, 2.7183, 0.0, 0.0};
        double arr25[6] = {0.109091, -0.5, 0.3672, 2.7000, 0.0, 0.0};
        double arr26[6] = {0.113636, -0.5, 0.3650, 2.6817, 0.0, 0.0};
        double arr27[6] = {0.118182, -0.5, 0.3628, 2.6633, 0.0, 0.0};
        double arr28[6] = {0.122727, -0.5, 0.3606, 2.6450, 0.0, 0.0};
        double arr29[6] = {0.127273, -0.5, 0.3584, 2.6267, 0.0, 0.0};
        double arr30[6] = {0.131818, -0.5, 0.3562, 2.6083, 0.0, 0.0};
        double arr31[6] = {0.136364, -0.5, 0.3540, 2.5900, 0.0, 0.0};
        double arr32[6] = {0.140909, -0.5, 0.3518, 2.5717, 0.0, 0.0};
        double arr33[6] = {0.145455, -0.5, 0.3496, 2.5533, 0.0, 0.0};
        double arr34[6] = {0.150000, -0.5, 0.3474, 2.5350, 0.0, 0.0};
        double arr35[6] = {0.154545, -0.5, 0.3452, 2.5167, 0.0, 0.0};
        double arr36[6] = {0.159091, -0.5, 0.3430, 2.4983, 0.0, 0.0};
        double arr37[6] = {0.163636, -0.5, 0.3408, 2.4800, 0.0, 0.0};
        double arr38[6] = {0.168182, -0.5, 0.3386, 2.4617, 0.0, 0.0};
        double arr39[6] = {0.172727, -0.5, 0.3364, 2.4433, 0.0, 0.0};
        double arr40[6] = {0.177273, -0.5, 0.3342, 2.4250, 0.0, 0.0};
        double arr41[6] = {0.181818, -0.5, 0.3320, 2.4067, 0.0, 0.0};
        double arr42[6] = {0.186364, -0.5, 0.3298, 2.3883, 0.0, 0.0};
        double arr43[6] = {0.190909, -0.5, 0.3276, 2.3700, 0.0, 0.0};
        double arr44[6] = {0.195455, -0.5, 0.3254, 2.3517, 0.0, 0.0};
        double arr45[6] = {0.200000, -0.5, 0.3232, 2.3333, 0.0, 0.0};
        double arr46[6] = {0.204545, -0.5, 0.3210, 2.3150, 0.0, 0.0};
        double arr47[6] = {0.209091, -0.5, 0.3188, 2.2967, 0.0, 0.0};
        double arr48[6] = {0.213636, -0.5, 0.3166, 2.2783, 0.0, 0.0};
        double arr49[6] = {0.218182, -0.5, 0.3144, 2.2600, 0.0, 0.0};
        double arr50[6] = {0.222727, -0.5, 0.3122, 2.2417, 0.0, 0.0};
        double arr51[6] = {0.227273, -0.5, 0.3100, 2.2233, 0.0, 0.0};
        double arr52[6] = {0.231818, -0.5, 0.3078, 2.2050, 0.0, 0.0};
        double arr53[6] = {0.236364, -0.5, 0.3056, 2.1867, 0.0, 0.0};
        double arr54[6] = {0.240909, -0.5, 0.3034, 2.1683, 0.0, 0.0};
        double arr55[6] = {0.245455, -0.5, 0.3012, 2.1500, 0.0, 0.0};
        double arr56[6] = {0.250000, -0.5, 0.2990, 2.1317, 0.0, 0.0};
        double arr57[6] = {0.254545, -0.5, 0.2968, 2.1133, 0.0, 0.0};
        double arr58[6] = {0.259091, -0.5, 0.2946, 2.0950, 0.0, 0.0};
        double arr59[6] = {0.263636, -0.5, 0.2924, 2.0767, 0.0, 0.0};
        double arr60[6] = {0.268182, -0.5, 0.2902, 2.0583, 0.0, 0.0};
        double arr61[6] = {0.272727, -0.5, 0.2880, 2.0400, 0.0, 0.0};
        double arr62[6] = {0.277273, -0.5, 0.2858, 2.0217, 0.0, 0.0};
        double arr63[6] = {0.281818, -0.5, 0.2836, 2.0033, 0.0, 0.0};
        double arr64[6] = {0.286364, -0.5, 0.2814, 1.9850, 0.0, 0.0};
        double arr65[6] = {0.290909, -0.5, 0.2792, 1.9667, 0.0, 0.0};
        double arr66[6] = {0.295455, -0.5, 0.2770, 1.9483, 0.0, 0.0};
        double arr67[6] = {0.300000, -0.5, 0.2748, 1.9300, 0.0, 0.0};
        double arr68[6] = {0.304545, -0.5, 0.2726, 1.9117, 0.0, 0.0};
        double arr69[6] = {0.309091, -0.5, 0.2704, 1.8933, 0.0, 0.0};
        double arr70[6] = {0.313636, -0.5, 0.2682, 1.8750, 0.0, 0.0};
        double arr71[6] = {0.318182, -0.5, 0.2660, 1.8567, 0.0, 0.0};
        double arr72[6] = {0.322727, -0.5, 0.2638, 1.8383, 0.0, 0.0};
        double arr73[6] = {0.327273, -0.5, 0.2616, 1.8200, 0.0, 0.0};
        double arr74[6] = {0.331818, -0.5, 0.2594, 1.8017, 0.0, 0.0};
        double arr75[6] = {0.336364, -0.5, 0.2572, 1.7833, 0.0, 0.0};
        double arr76[6] = {0.340909, -0.5, 0.2550, 1.7650, 0.0, 0.0};
        double arr77[6] = {0.345455, -0.5, 0.2528, 1.7467, 0.0, 0.0};
        double arr78[6] = {0.350000, -0.5, 0.2506, 1.7283, 0.0, 0.0};
        double arr79[6] = {0.354545, -0.5, 0.2484, 1.7100, 0.0, 0.0};
        double arr80[6] = {0.359091, -0.5, 0.2462, 1.6917, 0.0, 0.0};
        double arr81[6] = {0.363636, -0.5, 0.2440, 1.6733, 0.0, 0.0};
        double arr82[6] = {0.368182, -0.5, 0.2418, 1.6550, 0.0, 0.0};
        double arr83[6] = {0.372727, -0.5, 0.2396, 1.6367, 0.0, 0.0};
        double arr84[6] = {0.377273, -0.5, 0.2374, 1.6183, 0.0, 0.0};
        double arr85[6] = {0.381818, -0.5, 0.2352, 1.6000, 0.0, 0.0};
        double arr86[6] = {0.386364, -0.5, 0.2330, 1.5817, 0.0, 0.0};
        double arr87[6] = {0.390909, -0.5, 0.2308, 1.5633, 0.0, 0.0};
        double arr88[6] = {0.395455, -0.5, 0.2286, 1.5450, 0.0, 0.0};
        double arr89[6] = {0.400000, -0.5, 0.2264, 1.5267, 0.0, 0.0};
        double arr90[6] = {0.404545, -0.5, 0.2242, 1.5083, 0.0, 0.0};
        double arr91[6] = {0.409091, -0.5, 0.2220, 1.4900, 0.0, 0.0};
        double arr92[6] = {0.413636, -0.5, 0.2198, 1.4717, 0.0, 0.0};
        double arr93[6] = {0.418182, -0.5, 0.2176, 1.4533, 0.0, 0.0};
        double arr94[6] = {0.422727, -0.5, 0.2154, 1.4350, 0.0, 0.0};
        double arr95[6] = {0.427273, -0.5, 0.2132, 1.4167, 0.0, 0.0};
        double arr96[6] = {0.431818, -0.5, 0.2110, 1.3983, 0.0, 0.0};
        double arr97[6] = {0.436364, -0.5, 0.2088, 1.3800, 0.0, 0.0};
        double arr98[6] = {0.440909, -0.5, 0.2066, 1.3617, 0.0, 0.0};
        double arr99[6] = {0.445455, -0.5, 0.2044, 1.3433, 0.0, 0.0};
        double arr100[6] = {0.450000, -0.5, 0.2020, 1.3200, 0.0, 0.0};


	
list_.append(arr1);
list_.append(arr2);
list_.append(arr3);
list_.append(arr4);
list_.append(arr5);
list_.append(arr6);
list_.append(arr7);
list_.append(arr8);
list_.append(arr9);
list_.append(arr10);
list_.append(arr11);
list_.append(arr12);
list_.append(arr13);
list_.append(arr14);
list_.append(arr15);
list_.append(arr16);
list_.append(arr17);
list_.append(arr18);
list_.append(arr19);
list_.append(arr20);
list_.append(arr21);
list_.append(arr22);
list_.append(arr23);
list_.append(arr24);
list_.append(arr25);
list_.append(arr26);
list_.append(arr27);
list_.append(arr28);
list_.append(arr29);
list_.append(arr30);
list_.append(arr31);
list_.append(arr32);
list_.append(arr33);
list_.append(arr34);
list_.append(arr35);
list_.append(arr36);
list_.append(arr37);
list_.append(arr38);
list_.append(arr39);
list_.append(arr40);
list_.append(arr41);
list_.append(arr42);
list_.append(arr43);
list_.append(arr44);
list_.append(arr45);
list_.append(arr46);
list_.append(arr47);
list_.append(arr48);
list_.append(arr49);
list_.append(arr50);
list_.append(arr51);
list_.append(arr52);
list_.append(arr53);
list_.append(arr54);
list_.append(arr55);
list_.append(arr56);
list_.append(arr57);
list_.append(arr58);
list_.append(arr59);
list_.append(arr60);
list_.append(arr61);
list_.append(arr62);
list_.append(arr63);
list_.append(arr64);
list_.append(arr65);
list_.append(arr66);
list_.append(arr67);
list_.append(arr68);
list_.append(arr69);
list_.append(arr70);
list_.append(arr71);
list_.append(arr72);
list_.append(arr73);
list_.append(arr74);
list_.append(arr75);
list_.append(arr76);
list_.append(arr77);
list_.append(arr78);
list_.append(arr79);
list_.append(arr80);
list_.append(arr81);
list_.append(arr82);
list_.append(arr83);
list_.append(arr84);
list_.append(arr85);
list_.append(arr86);
list_.append(arr87);
list_.append(arr88);
list_.append(arr89);
list_.append(arr90);
list_.append(arr91);
list_.append(arr92);
list_.append(arr93);
list_.append(arr94);
list_.append(arr95);
list_.append(arr96);
list_.append(arr97);
list_.append(arr98);
list_.append(arr99);
list_.append(arr100);
        
        


        current_node = list_.getHead();
    }


private:
double T[4][4] = { 0 };

double pi = 3.141592;
//DHparameter (m)
double m_d1 = 0.089159;
double m_a2 = -0.425;
double m_a3 = -0.39225;
double m_d4 = 0.10915;
double m_d5 = 0.09465;
double m_d6 = 0.0823;
 double m_theta[6] = { 0 };
void set_trans(double x, double y, double z, double roll, double pitch, double yaw)
{
    double XYZ[3][1] = {{x}, {y}, {z}};

    double Rx[3][3] = {
        {1, 0, 0},
        {0, cos(roll), -sin(roll)},
        {0, sin(roll), cos(roll)}};

    double Ry[3][3] = {
        {cos(pitch), 0, sin(pitch)},
        {0, 1, 0},
        {-sin(pitch), 0, cos(pitch)}};

    double Rz[3][3] = {
        {cos(yaw), -sin(yaw), 0},
        {sin(yaw), cos(yaw), 0},
        {0, 0, 1}};

    // 중간 계산 결과 저장
    double R_temp[3][3] = {0};

    // R_temp = Rz * Ry
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            for (int k = 0; k < 3; k++)
            {
                R_temp[row][column] += Rz[row][k] * Ry[k][column];
            }
        }
    }

    // 최종 R = R_temp * Rx
    double R[3][3] = {0};
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            for (int k = 0; k < 3; k++)
            {
                R[row][column] += R_temp[row][k] * Rx[k][column];
            }
        }
    }

    // 변환 행렬 T 업데이트
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            if (row <= 2 && column <= 2)
            {
                T[row][column] = R[row][column];
            }
            else if (row <= 2 && column == 3)
            {
                T[row][column] = XYZ[row][0];
            }
            else if (row == 3 && column <= 2)
            {
                T[row][column] = 0;
            }
            else
            {
                T[row][column] = 1;
            }
        }
    }
}

void cal_theta()
    {
        double p05[4][1] = { 0 };
        double p65[4][1] = { {0},{0},{-m_d6},{1} };
	printf("%f\n", T[1][1]);
        for (int row = 0; row < 4; row++)
        {
            for (int column = 0; column < 1; column++)
            {
                for (int k = 0; k < 4; k++)
                {
                    p05[row][column] += T[row][k] * p65[k][column];
                }
            }

        }

        m_theta[0] = atan2(p05[1][0], p05[0][0]) - acos(m_d4 / sqrt(pow(p05[0][0], 2) + pow(p05[1][0], 2))) + pi / 2;
        m_theta[4] = acos((T[0][3] * sin(m_theta[0]) - T[1][3] * cos(m_theta[0]) - m_d4) / m_d6);
        m_theta[5] = atan2(((-T[0][1] * sin(m_theta[0]) + T[1][1] * cos(m_theta[0])) / sin(m_theta[4])),
            ((T[0][0] * sin(m_theta[0]) - T[1][0] * cos(m_theta[0])) / sin(m_theta[4])));

        double theta234 = atan2(-T[2][2] / sin(m_theta[4]),
            (T[0][2] * cos(m_theta[0]) + T[1][2] * sin(m_theta[0])) / sin(m_theta[4]));
        double T24_b14 = T[0][3] * cos(m_theta[0]) + T[1][3] * sin(m_theta[0])
            - m_d6 * T[0][2] * cos(m_theta[0]) - m_d6 * T[1][2] * sin(m_theta[0])
            + m_d5 * T[1][0] * sin(m_theta[0]) * sin(m_theta[5]) + m_d5 * T[0][1] * cos(m_theta[0]) * cos(m_theta[5])
            + m_d5 * T[0][0] * cos(m_theta[0]) * sin(m_theta[5]) + m_d5 * T[1][1] * sin(m_theta[0]) * cos(m_theta[5]);
        double T24_b24 = T[2][3] - m_d1 - m_d6 * T[2][2] + m_d5 * T[2][1] * cos(m_theta[5]) + m_d5 * T[2][0] * sin(m_theta[5]);

        //theta3 = 2 * atan(sqrt(((a2 + a3) ^ 2 - (b14. ^ 2 + b24. ^ 2)) / ((b14. ^ 2 + b24. ^ 2) - (a2 - a3) ^ 2)))
        m_theta[2] = -acos((pow(T24_b14,2) + pow(T24_b24,2) - pow(m_a2,2) - pow(m_a3,2)) / (2 * m_a2 * m_a3));

        double alpha = atan2(T24_b24, T24_b14);
        double beta = atan2(m_a3 * sin(m_theta[2]), m_a2 + m_a3 * cos(m_theta[2]));
        m_theta[1] = alpha - beta;

        m_theta[3] = theta234 - m_theta[1] - m_theta[2];
    }
void verifyAndPrintCoordinates() {
    // cal_theta 함수로 계산된 m_theta 값 사용
    // 예시로 m_theta 값이 이미 계산되었다고 가정
    std::cout << "Calculated Theta values: ";
    for (int i = 0; i < 6; i++) {
        std::cout << m_theta[i] << " ";
    }
    std::cout << std::endl;

    // 각도를 회전 행렬로 변환하여 최종 위치 계산
    double R[3][3];
    calculateRotationMatrix(m_theta[0], m_theta[1], m_theta[2], R);

    // 좌표 변환 (예시로 x = 0, y = 0, z = m_d1)
    double x = 0, y = 0, z = m_d1;
    double newX = R[0][0] * x + R[0][1] * y + R[0][2] * z;
    double newY = R[1][0] * x + R[1][1] * y + R[1][2] * z;
    double newZ = R[2][0] * x + R[2][1] * y + R[2][2] * z;

    // 결과 출력
    std::cout << "Calculated Coordinates: (" << newX << ", " << newY << ", " << newZ << ")" << std::endl;
}
void calculateRotationMatrix(double roll, double pitch, double yaw, double R[3][3]) {
    // Rx (Roll)
    double Rx[3][3] = { {1, 0, 0},
                        {0, cos(roll), -sin(roll)},
                        {0, sin(roll), cos(roll)} };
   
    // Ry (Pitch)
    double Ry[3][3] = { {cos(pitch), 0, sin(pitch)},
                        {0, 1, 0},
                        {-sin(pitch), 0, cos(pitch)} };
   
    // Rz (Yaw)
    double Rz[3][3] = { {cos(yaw), -sin(yaw), 0},
                        {sin(yaw), cos(yaw), 0},
                        {0, 0, 1} };

    // Rz * Ry * Rx 순서로 회전 행렬 계산
    double temp[3][3] = { 0 };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                temp[i][j] += Rz[i][k] * Ry[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            R[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                R[i][j] += temp[i][k] * Rx[k][j];
            }
        }
    }
}
    void handle_request(const std::shared_ptr<interfaces_ur5ik::srv::SixTheta::Request> request,     
          std::shared_ptr<interfaces_ur5ik::srv::SixTheta::Response> response) {
 
        if (current_node != nullptr) {
            RCLCPP_INFO(this->get_logger(), "Sending array: [%d, %d, %d, %d, %d, %d]",
                        current_node->data[0], current_node->data[1], current_node->data[2],
                        current_node->data[3], current_node->data[4], current_node->data[5]);
		
		double x = current_node->data[0];
		double y = current_node->data[1];
		double z = current_node->data[2];
		double roll = current_node->data[3];
		double pitch = current_node->data[4];
		double yaw = current_node->data[5];
		
		set_trans(x,y,z,roll,pitch,yaw);
		cal_theta();
                verifyAndPrintCoordinates();
                response -> srv_theta[0] = m_theta[0];
                response -> srv_theta[1] = m_theta[1];
                response -> srv_theta[2] = m_theta[2];
                response -> srv_theta[3] = m_theta[3];
                response -> srv_theta[4] = m_theta[4];
                response -> srv_theta[5] = m_theta[5];		
                
                current_node = current_node->next;

                
                
                response ->success = true; // 서비스 전송 성공 여부 설정
                               
               
                
		
        } else {
            RCLCPP_INFO(this->get_logger(), "All commands have been sent.");
                response -> srv_theta[0] = 0;
                response -> srv_theta[1] = 0;
                response -> srv_theta[2] = 0;
                response -> srv_theta[3] = 0;
                response -> srv_theta[4] = 0;
                response -> srv_theta[5] = 0;
                
                response ->success = false;
        }
     initialized_ = true; 
    }


    
void publish_next_position() {
        if (!initialized_) {
            RCLCPP_WARN(this->get_logger(), "Waiting for initialization via service...");
            return;  // 서비스 전송이 완료될 때까지 퍼블리시 하지 않음
        }

        if (current_node == nullptr) {
            RCLCPP_INFO(this->get_logger(), "No more points to publish.");
            
            
        }
        if (current_node != nullptr) {
            RCLCPP_INFO(this->get_logger(), "12345");
            
            
        }

        auto message = std_msgs::msg::Float64MultiArray();

        // 링크드리스트에서  좌표를 가져와서 퍼블리시
        double x = current_node->data[0];
	double y = current_node->data[1];
	double z = current_node->data[2];
	double roll = current_node->data[3];
	double pitch = current_node->data[4];
	double yaw = current_node->data[5];
        // calculate position		
	set_trans(x,y,z,roll,pitch,yaw);
	cal_theta();
        
        for (int i = 0; i < 6; i++){
            message.data.push_back(m_theta[i]);
        }
        // 퍼블리시
        RCLCPP_INFO(this->get_logger(), "Publishing point");
        object_position_pub_-> publish(message);

        // 퍼블리시 후 current 링크드리스트 set 
        current_node = current_node->next;
    }
    
    
    rclcpp::Service<interfaces_ur5ik::srv::SixTheta>::SharedPtr service_client_;
    rclcpp::CallbackGroup::SharedPtr client_cb_group_;
    LinkedList list_;
    customNode* current_node;
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr object_position_pub_;
    bool initialized_;
    rclcpp::TimerBase::SharedPtr timer_;
    
};
int main(int argc, char **argv)
{
	rclcpp::init(argc, argv);

	std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("calc_server");

	//rclcpp::Service<interfaces_ur5ik::srv::SixTheta>::SharedPtr server =
		//node -> create_service<interfaces_ur5ik::srv::SixTheta>("service_ik", &handle_request);

	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to set target.");

	rclcpp::spin(std::make_shared<ArrayServiceServer>());
	rclcpp::shutdown();
}

