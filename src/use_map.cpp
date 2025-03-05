//
// Created by LIUSHU on 2025/3/5.
//

#include <cstdio>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
//    // 构造map
//    map<char, int> map1; // 有序 不允许重复
//    // char 是键的类型，int 是值的类型
//    multimap<char, int> map2; // 有序 允许重复
//    unordered_map<char, int> map3; // 无序 不允许重复 经常使用，时间开销小
//    unordered_multimap<char, int> map4; // 无序 允许重复
//
//    // 键值对
//    pair<char, int> pair1 = {'w', 0};
//    // first 键 second 值
//    printf("key = %c, value = %d\n", pair1.first, pair1.second);
//
//    // 在map中新增
//    map1.insert(pair1);
//    map1.insert({'w', 1});
//    map2.insert(pair1);
//    map2.insert({'w', 1});
////    map2.insert({'o', 1});
//
//    // 在map中删除
//    map1.erase('w');
//    map2.erase('w');

    // 遍历map
//    map<char, int> map1 = {{'w', 0},
//                           {'o', 1},
//                           {'r', 2},
//                           {'l', 3},
//                           {'d', 4}};
    /*map<char, int>::iterator it;
    for (it = map1.begin(); it != map1.end(); it++) {
        printf("key = %c, value = %d\n", it->first, it->second);
    }*/
//    printf("value = %d\n", map1['o']);
//    printf("value = %d\n", map1['a']);
    /*if (map1.find('o') == map1.end()) {
        printf("key is not in map\n");
    } else {
        printf("value = %d\n", map1['o']);
    }
    map1['o'] = 6;*/
    multimap<char, int> map1 = {{'w', 0},
                                {'o', 1},
                                {'r', 2},
                                {'l', 3},
                                {'d', 4}};
    map1.insert({'o', 5});
    map<char, int>::iterator it;
    /*for (it = map1.begin(); it != map1.end(); it++) {
        printf("key = %c, value = %d\n", it->first, it->second);
    }*/
    // multimap不支持[]运算符
    // lower_bound(key) 返回第一个大于等于key的元素的迭代器 返回key对应的第一个值的位置 begin()
    // upper_bound(key) 返回第一个大于key的元素的迭代器 返回key对应的最后一个值的后一个位置 end()
    for(it = map1.lower_bound('o'); it != map1.upper_bound('o'); it++){
        printf("key = %c, value = %d\n", it->first, it->second);
    }
    return 0;
}