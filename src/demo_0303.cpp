//
// Created by LIUSHU on 2025/3/5.
//

// 找x （哈尔滨工业大学复试上机题）

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
    int x;
    scanf("%d", &x);
//    int idx;
//    for (idx = 0; idx < n; idx++) {
//        if (vec[idx] == x) {
//            printf("%d\n", idx);
//            return 0;
//        }
//    }
//    if (idx == n) {
//        printf("-1\n");
//    }
    // find(begIt, endIt, value) 返回begIt和endIt之间的第一个等于value的元素的位置
    vector<int>::iterator it;
    it = find(vec.begin(), vec.end(), x);
    if (it == vec.end()) {
        printf("-1\n");
    } else {
        // it + 1 偏移; it - vec.begin() 得到下标
        printf("%d\n", it - vec.begin());
    }
    return 0;
}