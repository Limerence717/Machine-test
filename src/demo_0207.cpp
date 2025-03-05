//
// Created by LIUSHU on 2025/3/5.
//

// 手机键盘 （清华大学复试上机题）

#include <cstdio>
#include <map>

using namespace std;

int main() {
    // 记录每个字母需要花费多长时间
    map<char, int> inputTime = {{'a', 1},
                                {'b', 2},
                                {'c', 3},
                                {'d', 1},
                                {'e', 2},
                                {'f', 3},
                                {'g', 1},
                                {'h', 2},
                                {'i', 3},
                                {'j', 1},
                                {'k', 2},
                                {'l', 3},
                                {'m', 1},
                                {'n', 2},
                                {'o', 3},
                                {'p', 1},
                                {'q', 2},
                                {'r', 3},
                                {'s', 4},
                                {'t', 1},
                                {'u', 2},
                                {'v', 3},
                                {'w', 1},
                                {'x', 2},
                                {'y', 3},
                                {'z', 4}};
    // 记录每个字母属于哪一个按键
    map<char, int> keyMap = {{'a', 2},
                             {'b', 2},
                             {'c', 2},
                             {'d', 3},
                             {'e', 3},
                             {'f', 3},
                             {'g', 4},
                             {'h', 4},
                             {'i', 4},
                             {'j', 5},
                             {'k', 5},
                             {'l', 5},
                             {'m', 6},
                             {'n', 6},
                             {'o', 6},
                             {'p', 7},
                             {'q', 7},
                             {'r', 7},
                             {'s', 7},
                             {'t', 8},
                             {'u', 8},
                             {'v', 8},
                             {'w', 9},
                             {'x', 9},
                             {'y', 9},
                             {'z', 9}};
    char str[200];
    while (scanf("%s", str) != EOF) {
        int lastKey = -1; // 上次按下的按键 最开始是没有
        int totalTime = 0; // 总时间
        for (int i = 0; str[i] != '\0'; i++) {
            // 判断是否要等待
            if (keyMap[str[i]] == lastKey) {
                totalTime += 2; // 等待2秒
            }
            totalTime += inputTime[str[i]]; // 输入字母的时间
            lastKey = keyMap[str[i]]; // 更新上次按下的按键
        }
        printf("%d\n", totalTime); // 输出总时间
    }
    return 0;
}