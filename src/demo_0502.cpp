//
// Created by LIUSHU on 2025/3/29.
//

// 括号匹配（南京理工大学复试上机题）

#include <cstdio>
#include <stack>

using namespace std;

int main() {
    stack<char> myStack;
    char strArr[10010] = {0};
    scanf("%s", strArr);
    for (int i = 0; strArr[i] != '\0'; i++) {
        if (strArr[i] == '<' || strArr[i] == '(' || strArr[i] == '{' || strArr[i] == '[') {
            myStack.push(strArr[i]);
        } else if (strArr[i] == '>') {
            if (myStack.empty() || myStack.top() != '<') {
                printf("no\n");
                return 0;
            } else {
                myStack.pop();
            }
        } else if (strArr[i] == ')') {
            if (myStack.empty() || myStack.top() != '(') {
                printf("no\n");
                return 0;
            } else {
                myStack.pop();
            }
        } else if (strArr[i] == ']') {
            if (myStack.empty() || myStack.top() != '[') {
                printf("no\n");
                return 0;
            } else {
                myStack.pop();
            }
        } else if (strArr[i] == '}') {
            if (myStack.empty() || myStack.top() != '{') {
                printf("no\n");
                return 0;
            } else {
                myStack.pop();
            }
        }
    }
    if (myStack.empty()) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}