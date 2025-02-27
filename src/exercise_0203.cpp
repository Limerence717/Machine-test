//
// Created by LIUSHU on 2025/2/23.
//

// 一端进，两端出

#include <cstdio>
#include <vector>
#include <list>

using namespace std;

int main() {
    int N, K;
    scanf("%d%d", &N, &K);
    vector<int> insertVec(N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &insertVec[i]);
    }
    for (int i = 0; i < K; i++) {
        vector<int> outputVec(N);
        for (int j = 0; j < N; j++) {
            scanf("%d", &outputVec[j]);
        }
        list<int> myQueue;
        int index = 0; // 初始化一个索引变量index，用于跟踪outputVec中当前需要匹配的元素位置。
        for (int j = 0; j < N; j++) { // 遍历insertVec数组，N为insertVec的长度。
            myQueue.push_back(insertVec[j]); // 将insertVec中的第j个元素插入到myQueue的尾部。
            // 当myQueue不为空，并且myQueue的队首或队尾元素等于outputVec[index]时，进入循环。
            while (!myQueue.empty() && (myQueue.front() == outputVec[index] || myQueue.back() == outputVec[index])) {
                if (myQueue.front() == outputVec[index]) {
                    // 如果myQueue的队首元素等于outputVec[index]，则从队首移除该元素。
                    myQueue.pop_front();
                } else {
                    // 如果myQueue的队尾元素等于outputVec[index]，则从队尾移除该元素。
                    myQueue.pop_back();
                }
                index++; // 每次成功匹配并移除一个元素后，将index递增，指向outputVec中的下一个待匹配元素。
            }
        }
        if (myQueue.empty()) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}