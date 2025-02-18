//
// Created by LIUSHU on 2025/2/18.
//

// 对称平方数1 （清华大学复试上机题）

#include <stdio.h>

using namespace std;

int main() {
    for (int i = 0; i <= 256; i++) {
        int num = i * i; // 计算平方数
        int temp = num;
        int rev = 0; // 保存反转后的数
        while (temp > 0) { // 计算反转后的数
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (num == rev) { // 判断是否为对称数
            printf("%d\n", i);
        }
    }
    return 0;
}