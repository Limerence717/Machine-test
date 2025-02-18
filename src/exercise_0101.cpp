//
// Created by LIUSHU on 2025/2/18.
//

// 与7无关的数（北京大学复试上机题）

#include <stdio.h>

using namespace std;

int main() {
    int n;
    int res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 7 != 0 && i % 10 != 7 && i / 10 % 10 != 7) {
            res = res + i * i;
        }
    }
    printf("%d\n", res);
    return 0;
}

// GPT
/*#include <stdio.h>

// 判断一个数是否与7相关
int is_related_to_7(int num) {
    if (num % 7 == 0) {
        return 1;
    }
    while (num > 0) {
        if (num % 10 == 7) {
            return 1;
        }
        num /= 10;
    }
    return 0;
}

// 计算与7无关的数的平方和
int sum_of_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (!is_related_to_7(i)) {
            sum += i * i;
        }
    }
    return sum;
}

int main() {
    int n;
    printf("请输入一个小于100的正整数n: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("输入错误，请输入一个小于100的正整数。\n");
        return 1;
    }

    int result = sum_of_squares(n);
    printf("与7无关的数的平方和: %d\n", result);

    return 0;
}*/