//
// Created by LIUSHU on 2025/3/8.
//

// 单词个数统计（华中科技大学复试上机题）

#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main() {
    char arr[200] = {0};
    fgets(arr, 200, stdin);
//    cin.getline()
    int i = 0;
    int alphaCount = 0;
    bool isSpace = true;
    int wordCount = 0;
    map<char, int> alphaMap;
    while (true) {
        if (arr[i] == '\n' || arr[i] == '\0') {
            break;
        } else if (arr[i] == ' ') {
            isSpace = true;
        } else {
            alphaCount++;
            if (isSpace) {
                wordCount++;
            }
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                // ASCII
                arr[i] += 32;
            }
            alphaMap[arr[i]]++;
            isSpace = false;
        }
        i++;
    }
    printf("%d\n", alphaCount);
    printf("%d\n", wordCount);
    map<char, int>::iterator it;
    int maxTimes = 0;
    for (it = alphaMap.begin(); it != alphaMap.end(); it++) {
        if (it->second > maxTimes) {
            maxTimes = it->second;
        }
    }
    for (it = alphaMap.begin(); it != alphaMap.end(); it++) {
        if (it->second == maxTimes) {
            printf("%c ", it->first);
        }
    }
    printf("\n");
    printf("%d\n", maxTimes);
    return 0;
}