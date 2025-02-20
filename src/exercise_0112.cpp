//
// Created by LIUSHU on 2025/2/20.
//

// 重复者（北京大学复试上机题）

#include <cstdio>
#include <cstring>

using namespace std;

// 函数 square 用于生成分形图形
// curSize: 当前分形图形的大小
// patSize: 模板图案的大小
// pattern: 模板图案
// picture: 当前生成的分形图形
// last: 上一次生成的分形图形
void square(int curSize, int patSize, char pattern[3000][3000], char picture[3000][3000], char last[3000][3000]) {
    if (curSize == 1) {
        // 如果当前大小为1，直接将模板图案复制到 picture 中
        for (int i = 0; i < patSize; ++i) {
            for (int j = 0; j < patSize; ++j) {
                picture[i][j] = pattern[i][j];
            }
        }
    } else {
        // 如果当前大小大于1，根据模板图案的字符是否为空格进行分形处理
        for (int i = 0; i < patSize; ++i) {
            for (int j = 0; j < patSize; ++j) {
                if (pattern[i][j] == ' ') {
                    // 如果模板图案的字符是空格，则在 picture 中对应位置填充空格
                    for (int pi = i * curSize; pi < i * curSize + curSize; ++pi) {
                        for (int pj = j * curSize; pj < j * curSize + curSize; ++pj) {
                            picture[pi][pj] = ' ';
                        }
                    }
                } else {
                    // 如果模板图案的字符不是空格，则将上一次生成的分形图形复制到 picture 中对应位置
                    for (int pi = i * curSize; pi < i * curSize + curSize; ++pi) {
                        for (int pj = j * curSize; pj < j * curSize + curSize; ++pj) {
                            picture[pi][pj] = last[pi - i * curSize][pj - j * curSize];
                        }
                    }
                }
            }
        }
    }

    // 将当前生成的分形图形保存到 last 中，以便下一次使用
    for (int i = 0; i < curSize * patSize; ++i) {
        for (int j = 0; j < curSize * patSize; ++j) {
            last[i][j] = picture[i][j];
        }
    }
}

// 数组的大小为 3000*3000 约9MB，超过了1MB的限制，所以这里设成全局变量
char pattern[3000][3000];  // 模板图案
char last[3000][3000];     // 上一次生成的分形图形
char picture[3000][3000];  // 当前生成的分形图形

int main() {
    int N;  // 模板图案的大小
    int Q;  // 分形的级别

    while (true) {
        scanf("%d", &N);  // 读取模板图案的大小
        if (N == 0) {
            break;  // 如果 N 为0，结束程序
        }
        getchar();  // fgets会读到'\n' 所以先去掉

        // 读取模板图案
        for (int i = 0; i < N; ++i) {
            fgets(pattern[i], 3000, stdin);  // 读取一行模板图案
            int curLength = strlen(pattern[i]);  // 获取当前行的长度
            for (int j = curLength - 1; j < N; ++j) {
                pattern[i][j] = ' ';  // 将超出模板大小的部分填充为空格
            }
        }

        scanf("%d", &Q);  // 读取分形的级别
        int curSize = 1;  // 当前分形图形的大小初始化为1

        // 逐渐分形操作
        for (int i = 0; i < Q; ++i) {
            square(curSize, N, pattern, picture, last);  // 生成分形图形
            curSize *= N;  // 更新当前分形图形的大小
        }

        // 输出最终生成的分形图形
        for (int i = 0; i < curSize; ++i) {
            for (int j = 0; j < curSize; ++j) {
                printf("%c", picture[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}