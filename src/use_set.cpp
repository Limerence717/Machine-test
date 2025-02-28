//
// Created by LIUSHU on 2025/2/28.
//

// set的使用

#include <cstdio>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    // 构造
    set<int> set1 = {1, 3, 5};
    multiset<int> set2 = {1, 3, 5, 1, 3, 5};
    unordered_set<int> set3 = {2, 4, 6};
    unordered_multiset<int> set4 = {2, 4, 6, 2, 4, 6};

//    // 新增元素
//    set1.insert(2);
//    set1.insert(1);
//    set2.insert(2);
//    set2.insert(1);
//
//    // 删除元素
//    set1.erase(1);
//    set2.erase(1);

    // 遍历
    unordered_multiset<int>::iterator it;
    for (it = set4.begin(); it != set4.end(); it++) {
        printf("%d ", *it);
    }
    printf("\n");

    // find 查找元素的位置，找不到就返回一个尾后迭代器
    if (set3.find(2) == set3.end()) {
        printf("2 is not in set!\n");
    } else {
        printf("2 is in set!\n");
    }

    // count 统计元素的个数
    printf("2 occurs %d times\n",set2.count(2));
    printf("2 occurs %d times\n",set3.count(2));
    printf("2 occurs %d times\n",set4.count(2));

    // set的元素不允许修改 可以先删除再插入
    return 0;
}