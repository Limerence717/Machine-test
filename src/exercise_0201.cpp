//
// Created by LIUSHU on 2025/2/21.
//

// 打印日期 （华中科技大学复试上机题）

#include <cstdio>

using namespace std;

void NextDay(int &year, int &month, int &day) {
    // & 出现在定义or形参当中，表示引用的意思；出现在其他位置，表示取地址
    // 存储一下 月份和天数的对应关系
    int dayOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 判断是否为闰年
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    if (isLeapYear) {
        dayOfMonth[2] = 29;
    } else {
        dayOfMonth[2] = 28;
    }
    // 判断是否为最后一天
    day++;
    if (day > dayOfMonth[month]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    // 输出结果
//    printf("%d-%d-%d\n", year, month, day);
}

int main() {
    int year, n;
    while (scanf("%d %d", &year, &n) != EOF) {
        int next = 1;
        int curmonth = 1, curday = 1;
        while (1) {
            if (next == n) {
                break;
            }
            NextDay(year, curmonth, curday);
            next++;
        }
        printf("%04d-%02d-%02d\n", year, curmonth, curday);
    }
    return 0;
}