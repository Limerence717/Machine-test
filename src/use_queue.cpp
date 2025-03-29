//
// Created by LIUSHU on 2025/3/28.
//

// queue的使用

#include <cstdio>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;
    if (myQueue.empty()) {  // 判断队列是否为空
        printf("myQueue is empty!\n");
    }
    for (int i = 0; i < 10; i++) {
        myQueue.push(i); // 入队
        printf("front = %d, back = %d\n", myQueue.front(), myQueue.back()); // 输出队首队尾
    }
    for (int i = 0; i < 9; i++) {
        myQueue.pop(); // 出队
        printf("front = %d, back = %d\n", myQueue.front(), myQueue.back()); // 输出队首队尾
    }
    return 0;
}