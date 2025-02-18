//
// Created by LIUSHU on 2025/2/18.
//

// 买房子（北京大学复试上机题）

#include <cstdio>

using namespace std;

int main() {
    int n, k;
    while (scanf("%d%d", &n, &k) != EOF) {
        double HousingPrices = 200;
        int assets = n;
        int flag = 0;  // 每次循环重新初始化 flag
        int year = -1; // 确保 year 变量有默认值
        for (int i = 1; i <= 21; i++) {
            if (assets >= HousingPrices) {
                year = i;
                flag = 1;
                break;
            }
            assets += n;
            HousingPrices = HousingPrices * (1 + k / 100.0);
        }
        if (flag) {
            printf("%d\n", year);
        } else {
            printf("Impossible\n");
        }
    }
    return 0;
}