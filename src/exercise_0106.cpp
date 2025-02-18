//
// Created by LIUSHU on 2025/2/18.
//

// 递推数列（清华大学复试上机题）

/*  Time Limit Exceeded
#include <cstdio>

using namespace std;

int func(int a0, int a1, int p, int q, int k) {
    if (k == 0) return a0;
    if (k == 1) return a1;
    return (func(a0, a1, p, q, k - 1) * p + func(a0, a1, p, q, k - 2) * q);
}

int main() {
    int a0, a1, p, q, k;
    scanf("%d%d%d%d%d", &a0, &a1, &p, &q, &k);
    printf("%d\n", func(a0, a1, p, q, k) % 10000);
    return 0;
}*/

#include <cstdio>

using namespace std;

int func(int a0, int a1, int p, int q, int k) {
    // 处理特殊情况：k = 0 或 k = 1 时直接返回对应的初值
    if (k == 0) return a0 % 10000;
    if (k == 1) return a1 % 10000;

    // 维护递推公式中的两个前置值
    int prev2 = a0 % 10000; // F(0) 取模 10000，防止溢出
    int prev1 = a1 % 10000; // F(1) 取模 10000
    int curr; // 用于存储当前计算出的 F(k)

    // 采用迭代方式计算 F(k)
    for (int i = 2; i <= k; i++) {
        // 递推公式：F(k) = F(k-1) * p + F(k-2) * q
        // 每次计算时取模 10000，防止数值过大导致溢出
        curr = (prev1 * p + prev2 * q) % 10000;

        // 更新 prev2 和 prev1，为下一轮计算做准备
        prev2 = prev1;
        prev1 = curr;
    }

    // 返回计算出的 F(k)
    return curr;
}

int main() {
    int a0, a1, p, q, k;
    scanf("%d%d%d%d%d", &a0, &a1, &p, &q, &k);
    printf("%d\n", func(a0, a1, p, q, k));
    return 0;
}

