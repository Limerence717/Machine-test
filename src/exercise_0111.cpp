//
// Created by LIUSHU on 2025/2/20.
//

// 旋转矩阵（北京航空航天大学复试上机题）

#include <cstdio>

using namespace std;
//1 2 3        7 4 1
//4 5 6   -->  8 5 2
//7 8 9        9 6 3

// 当 n = 3 时
// 0,0 --> 0,2
// 0,1 --> 1,2
// 0,2 --> 2,2
// 1,0 --> 0,1
// 1,1 --> 1,1
// 1,2 --> 2,1
// 2,0 --> 0,0
// 2,1 --> 1,0
// 2,2 --> 2,0
// ...
// n-1-j,i --> i,j 旋转后坐标i,j的原来坐标是n-1-j,i

void ClockwiseRotate90(int matrix[10][10], int n) {
    // 顺时针旋转90度
    // 旋转其他度数重复执行该函数即可

    // 先备份一下矩阵
    int temp[10][10];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            temp[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = temp[n - 1 - j][i];
        }
    }
}

bool Compare(int lhs[10][10], int rhs[10][10], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (lhs[i][j] != rhs[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    int lhs[10][10];
    int rhs[10][10];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &lhs[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &rhs[i][j]);
        }
    }
    if (Compare(lhs, rhs, n)) {
        printf("0\n");
    } else {
        ClockwiseRotate90(lhs, n);
        if (Compare(lhs, rhs, n)) {
            printf("90\n");
        } else {
            ClockwiseRotate90(lhs, n);
            if (Compare(lhs, rhs, n)) {
                printf("180\n");
            } else {
                ClockwiseRotate90(lhs, n);
                if (Compare(lhs, rhs, n)) {
                    printf("270\n");
                } else {
                    printf("-1\n");
                }
            }
        }
    }
    return 0;
}