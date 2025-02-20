//
// Created by LIUSHU on 2025/2/20.
//

// Hello World for U（浙江大学复试上机题）

#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char str[1024];
    char pattern[30][30] = {0};
    while (scanf("%s", str) != EOF) {
        int N = strlen(str);
        int n1, n2, n3;
        // 使用枚举算出 n1 n2 n3的合理值
        for (n2 = 3; n2 <= N; n2++) {
            // n1 = (2+N-n2)/2
            if ((N + 2 - n2) % 2 == 0) {
                n1 = (N + 2 - n2) / 2;
                if (n1 <= n2) {
                    n3 = n1;
                    break;
                }
            }
        }
        // 先将所有格子涂上空格
        for (int i = 0; i <= 29; i++) {
            for (int j = 0; j <= 29; ++j) {
                pattern[i][j] = ' ';
            }
        }
        int x = 0;
        int y = 0;
        for (int i = 0; i < N; i++) {
            if (i < n1 - 1) { // 先向下
                pattern[x][y] = str[i];
                x++;
            } else if (i < n1 + n2 - 2) { // 向右
                pattern[x][y] = str[i];
                y++;
            } else {
                pattern[x][y] = str[i]; // 向上
                x--;
            }
        }
//        for (int i = 0; i < n1; i++) {
//            printf("%s\n", pattern[i]);
//        }
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("%c", pattern[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}