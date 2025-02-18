//
// Created by LIUSHU on 2025/2/18.
//

// 特殊乘法（清华大学复试上机题）

#include <cstdio>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int n[10], m[10];
    for (int i = 0; i < 10; i++) {
        n[i] = 0;
        m[i] = 0;
    }
    int count_1 = 0;
    while (a > 0) {
        n[count_1++] = a % 10;
        a /= 10;
    }
    int count_2 = 0;
    while (b > 0) {
        m[count_2++] = b % 10;
        b /= 10;
    }
    int ans = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            ans += n[i] * m[j];
    printf("%d", ans);
    return 0;
}