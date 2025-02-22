//
// Created by LIUSHU on 2025/2/22.
//

// list的使用 存在大量往中间插入和删除元素的操作，效率比vector高

#include <cstdio>
#include <list>

using namespace std;

int main() {
    list<int> ls1 = {1, 3, 5, 7, 9};
    list<int>::iterator it = ls1.begin();
    // it = it + 2; list不支持这种操作 用自增运算符代替
    it++;
    it++;
    printf("*it = %d\n", *it);
    ls1.erase(it);  // list中使用erase和insert 效率更高一点
    for (it = ls1.begin(); it != ls1.end(); it++) {
        printf("after erase: *it = %d\n", *it);
    }
    return 0;
}