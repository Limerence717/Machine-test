//
// Created by LIUSHU on 2025/2/21.
//

// 日期（贵州大学复试上机题）

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
    char arr[7][20] = {
            "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };
    // Sunday -> 0 Monday -> 1 .... Saturday -> 6
    int m, d;
    scanf("%d%d", &m, &d);
    int year = 2012;
    int mon = 4;
    int day = 12;
    int days = 0;
    while (1) {
        if (mon == m && day == d) {
            break;
        }
        NextDay(year, mon, day);
        ++days;
    }
    printf("%s\n", arr[(days + 4) % 7]);
    return 0;
}