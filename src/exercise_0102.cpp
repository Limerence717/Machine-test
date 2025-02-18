//
// Created by LIUSHU on 2025/2/18.
//

// 约数的个数（清华大学复试上机题）

/* Time Limit Exceeded
#include <stdio.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n > 0) {
        int num;
        int count = 0;
        scanf("%d", &num);
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }
        printf("%d\n", count);
        n--;
    }
    return 0;
}*/

// 改进版
#include <stdio.h>

// 计算一个数的约数个数
int count_divisors(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count++; // 计算 i
            if (i != num / i) {
                count++; // 计算 num / i，避免重复计算平方根情况
            }
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // 读取 n 个整数
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 计算并输出每个数的约数个数
    for (int i = 0; i < n; i++) {
        printf("%d\n", count_divisors(arr[i]));
    }

    return 0;
}
