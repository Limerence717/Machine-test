//
// Created by LIUSHU on 2025/3/29.
//

// stack的使用

#include <cstdio>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;
    if (myStack.empty()) {
        printf("myStack is empty\n");
    }
    for (int i = 0; i < 10; i++) {
        myStack.push(i);
        printf("myStack top = %d\n", myStack.top());
    }
    printf("----------\n");
    for (int i = 0; i < 9; i++) {
        myStack.pop();
        printf("myStack top = %d\n", myStack.top());
    }
    return 0;
}