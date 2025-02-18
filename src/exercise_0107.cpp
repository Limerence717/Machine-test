//
// Created by LIUSHU on 2025/2/18.
//

// 学分绩点（北京大学复试上机题）

#include <cstdio>

using namespace std;

int main() {
    int n; // 总的课程数
    scanf("%d", &n);
    int credit[n]; // 课程学分
    for (int i = 0; i < n; i++) {
        scanf("%d", &credit[i]);
    }
    int score[n]; // 课程成绩
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }
    double gpa[n]; // 课程绩点
    for (int i = 0; i < n; i++) {
        if (score[i] >= 90) {
            gpa[i] = 4.0;
        } else if (score[i] >= 85) {
            gpa[i] = 3.7;
        } else if (score[i] >= 82) {
            gpa[i] = 3.3;
        } else if (score[i] >= 78) {
            gpa[i] = 3.0;
        } else if (score[i] >= 75) {
            gpa[i] = 2.7;
        } else if (score[i] >= 72) {
            gpa[i] = 2.3;
        } else if (score[i] >= 68) {
            gpa[i] = 2.0;
        } else if (score[i] >= 64) {
            gpa[i] = 1.5;
        } else if (score[i] >= 60) {
            gpa[i] = 1.0;
        } else {
            gpa[i] = 0.0;
        }
    }
    double gradepoints[n]; //学分绩点
    for (int i = 0; i < n; i++) {
        gradepoints[i] = gpa[i] * credit[i];
    }
    double gradepoints_sum = 0.0; // 总学分绩点
    for (int i = 0; i < n; i++) {
        gradepoints_sum += gradepoints[i];
    }
    double credit_sum = 0.0; // 总学分
    for (int i = 0; i < n; i++) {
        credit_sum += credit[i];
    }
    double gpa_sum = gradepoints_sum / credit_sum; // 总评绩点
    printf("%.2f", gpa_sum); // 输出总评绩点
    return 0;
}