//
// Created by LIUSHU on 2025/2/18.
//

// 水仙花数（中南大学复试上机题）

#include <stdio.h>

using namespace std;

int main() {
    int m, n;
    while (true) {
        scanf("%d%d", &m, &n);
        if (m == 0 && n == 0) break;
        int flag = 0;
        for (int i = m; i <= n; i++) {
            int sum = 0;
            int temp = i;
            while (temp > 0) {
                sum = sum + ((temp % 10) * (temp % 10) * (temp % 10));
                temp /= 10;
            }
            if (sum == i) {
                printf("%d ", i);
                flag = 1;
            }
        }
        if (flag == 0) printf("no\n");
        else printf("\n");
    }
    return 0;
}
