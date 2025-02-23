//
// Created by LIUSHU on 2025/2/23.
//

// 剩下的树 （清华大学复试上机题）

#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int L, M;
    scanf("%d%d", &L, &M);
    vector<int> road(L + 1); // 0 ~ L
    // road[i] -> 0 有树， 1 没有树
    for (int i = 0; i < M; i++) {
        int left, right;
        scanf("%d%d", &left, &right);
        for (int j = left; j <= right; j++) {
            road[j] = 1;
        }
    }
    int treeNum = 0;
    vector<int>::iterator it;
    for (it = road.begin(); it != road.end(); it++) {
        if (*it == 0) {
            treeNum++;
        }
    }
    printf("%d\n", treeNum);
    return 0;
}