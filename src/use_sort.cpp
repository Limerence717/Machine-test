//
// Created by LIUSHU on 2025/3/5.
//

// c++的sort的使用

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int lhs, int rhs) {
    return lhs >= rhs;
}

int main() {
    int arr[6] = {2, 4, 6, 1, 3, 5};
    // sort 第一个参数填起始地址 第二个参数填最后一个元素的后一个位置的地址
    // [ )
    sort(arr, arr + 6); // 排序 <- 两个参数都是指针

    vector<int> vec = {2, 4, 6, 1, 3, 5};
//    sort(vec.begin(), vec.end()); // 排序 <- 两个参数都是迭代器
    sort(vec.begin(), vec.end(), compare); // 自定义排序规则
    return 0;
}