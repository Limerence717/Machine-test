//
// Created by LIUSHU on 2025/3/29.
//

// 编排字符串（北京理工大学复试上机题）

#include <cstdio>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> myStack;
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        char strArr[200] = {0};
        scanf("%s", strArr);
        string str = strArr;
        myStack.push(str);

        stack<string> outputStack = myStack;
        for (int j = 1; j <= 4; j++) {
            if (outputStack.empty()) {
                break;
            }
            printf("%d=%s ", j, outputStack.top().c_str());
            outputStack.pop();
        }
        printf("\n");
    }
    return 0;
}