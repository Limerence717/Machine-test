//
// Created by LIUSHU on 2025/2/14.
//

//  abc （清华大学复试上机题）

#include <stdio.h>

using namespace std;

int main() {
    int a, b, c;
    //  变量命名地规范
    //  跟随试题
    //  自定义变量，尽量以单词作为变量名字
    for (a = 0; a <= 9; a++) {
        //  循环使用地规范
        // 不要省略任意一个花括号
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                if (532 == (100 * a + 10 * b + c) + (100 * b + 10 * c + c)) {
                    //  建议 左边写常量，右边写表达式
                    //  if(a == 1)-->if(a = 1)
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}