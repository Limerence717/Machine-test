//
// Created by LIUSHU on 2025/2/20.
//

// 叠筐 （HDU 2074）

#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int n;
    char in, out;
    char pattern[100][100] = {0};
    while (scanf("%d %c %c", &n, &in, &out) != EOF) {
        int layer; //层级 0->n/2
        memset(pattern, 0, sizeof(pattern));
        char current = in; //当前层级的花色
        for (layer = 0; layer <= n / 2; layer++) {
            // n/2 - layer, n/2 - layer 左上
            // n/2 + layer, n/2 + layer 右下
            // n/2 + layer, n/2 - layer 左下
            // n/2 - layer, n/2 + layer 右上
            for (int x = n / 2 - layer, y = n / 2 - layer; y <= n / 2 + layer; y++) {
                pattern[x][y] = current;
            }
            for (int x = n / 2 + layer, y = n / 2 - layer; y <= n / 2 + layer; y++) {
                pattern[x][y] = current;
            }
            for (int x = n / 2 - layer, y = n / 2 - layer; x <= n / 2 + layer; x++) {
                pattern[x][y] = current;
            }
            for (int x = n / 2 - layer, y = n / 2 + layer; x <= n / 2 + layer; x++) {
                pattern[x][y] = current;
            }
            if (current == in) {
                current = out;
            } else {
                current = in;
            }
        }
        if (n != 1) {
            pattern[0][0] = ' ';
            pattern[n - 1][0] = ' ';
            pattern[0][n - 1] = ' ';
            pattern[n - 1][n - 1] = ' ';
        }
//        for (int i = 0; i < n; i++) {
//            pattern[i][n] = '\0';  // 保证每行末尾是 '\0'
//            printf("%s\n", pattern[i]);
//        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%c", pattern[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}