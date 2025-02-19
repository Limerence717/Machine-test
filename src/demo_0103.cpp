//
// Created by LIUSHU on 2025/2/19.
//

// 打印数字菱形 (优先使用二维数组)

#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    char str[1000] = {0};
    char arr[100][100] = {0};
    int n;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i <= n; i++) {
        int j = 0;
//        memset(str, 0, 1000);
        for (j = 0; j < 2 * n - 2 * i; j++) {
//            str[j] = ' ';
            arr[i][j] = ' ';
        }
        for (int k = 0; k <= i; k++) {
//            str[j] = '0' + k;
//            str[j + 1] = ' ';
            arr[i][j] = '0' + k;
            arr[i][j + 1] = ' ';
            j += 2;
        }
        for (int k = i - 1; k >= 0; k--) {
//            str[j] = '0' + k;
//            str[j + 1] = ' ';
            arr[i][j] = '0' + k;
            arr[i][j + 1] = ' ';
            j += 2;
        }
//        printf("%s\n", str);
    }
    for (i = n + 1; i <= 2 * n; i++) {
        int j = 0;
//        memset(str, 0, 1000);
        for (j = 0; j < 2 * i - 2 * n; j++) {
//            str[j] = ' ';
            arr[i][j] = ' ';
        }
        for (int k = 0; k <= 2 * n - i; k++) {
//            str[j] = '0' + k;
//            str[j + 1] = ' ';
            arr[i][j] = '0' + k;
            arr[i][j + 1] = ' ';
            j += 2;
        }
        for (int k = 2 * n - i - 1; k >= 0; k--) {
//            str[j] = '0' + k;
//            str[j + 1] = ' ';
            arr[i][j] = '0' + k;
            arr[i][j + 1] = ' ';
            j += 2;
        }
//        printf("%s\n", str);
    }
    for (i = 0; i < 2 * n + 1; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}