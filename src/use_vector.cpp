//
// Created by LIUSHU on 2025/2/22.
//

// vector的使用 优先使用vector 若效率低考虑list

#include <cstdio>
#include <vector> // vector不需要.h后缀

using namespace std;
struct MyType {
    int val1;
    double val2;
}; // 自定义类型
int main() {
    // 初始化 构造
//    vector<int> vec1; // vector不是类型，而是模板类，需要指定类型；vector<type>才是类型
//    vector<double> vec2;
//    vector<MyType> vec3;
//    vector<vector<int>> vec4; // 二维vector 动态数组的动态数组
//    vector<int> arr[10]; // 机试推荐的用法 动态数组的静态数组 图算法 邻接表
//    vector<int> vec2(100); // vec2 一开始就有100个元素

    // push_back 往动态数组的尾部插入
//    int a;
//    while (scanf("%d", &a)!= EOF) {
//        vec1.push_back(a);
//    }

    // 访问某个元素
    vector<int> vec1 = {1, 3, 5, 7, 9};
//    int i = 0;
//    printf("vec1[%d] = %d\n", i, vec1[i]);

    // 访问 vector 的大小
//    int size = vec1.size();
//    printf("vec1.size() = %d\n", size);

    // 遍历 vector
//    for (int i = 0; i < size; i++) {
//        printf("vec1[%d] = %d\n", i, vec1[i]);
//    }

    // 使用迭代器遍历 vector
//    vector<int>::iterator it;
//    for (it = vec1.begin(); it != vec1.end(); it++) {
//        printf("*it = %d\n", *it);
//    }

//    vector<int>::iterator it;
//    // 迭代器可以获取元素的位置
//    it = vec1.begin();
//    // insert会修改动态数组的结构，插入完成以后it的指向无意义
//    vec1.insert(it, 2); // 在it前面插入元素
//    it = vec1.begin(); // 重新获取迭代器
//    it = it + 3; // it + 3 相当于3次++ 只能在vector中使用
//    vec1.insert(it, 6);

//    vec1.clear(); // 清空vector

//    vec1.pop_back(); // 删除最后一个元素

    vector<int>::iterator it;
    it = vec1.begin() + 2; // 指向第三个元素
    vec1.erase(it); // 删除第三个元素
    return 0;
}