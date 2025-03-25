//
// Created by LIUSHU on 2025/3/8.
//

// string的使用

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
//    string str1 = "Hello,";
//    string str2 = "World!";
//    string str3;
//    str3 = "Hello,"; // string 支持 = 赋值
//    str3 = str2;
//    // string 支持 == 判断内容是否相同
//    bool isSame = false;
//    isSame = (str3 == str2);
//    // string 支持 + 连接操作
//    str3 = str1 + str2;
//    // string 支持 用 < <= > >= 比较大小 字典序
//    bool isLarger = false;
//    isLarger = (str1 > str2);
//
//    // string 非常像 vector<char>
//    string str4 = "abcdef";
//    char ch;
//    ch = str4[0];
//    ch = str4[1];
//    str4.push_back('g');
//    str4.pop_back();
//
//    string::iterator it;
//    for (it = str4.begin(); it != str4.end(); it++) {
//        printf("*it = %c\n", *it);
//    }
//
//    it = str4.begin();
//    str4.insert(it, 'A');
//    it = str4.begin();
//    str4.erase(it);
//
//    // string 对比 vector 拓展了insert和erase的用法
//    // string 使用整数下标，插入删除多个字符
//    str4.insert(0, "xyz"); // 整数下标 字符串常量
//    str4.erase(0, 3); // 两个整数下标 删除的范围 [0,3)
//
//    // string 获取子串
//    string str5;
//    str5 = str4.substr(0, 3); // 整数下标 长度
//
//    // string 字符串匹配
//    string str6 = "howdoyoudo";
//    int pos = str6.find("do", 0);
//    if (pos == string::npos) {
//        printf("do is not found\n");
//    }
//
//    int i = 1234;
//    string str7 = to_string(i); // 整数转字符串
//    float f = 3.14;
//    str7 = to_string(f); // 浮点数转字符串
//    string str8 = "3.14159";
//    f = stof(str8); // 字符串转浮点数
//    str8 = "314159";
//    i = stoi(str8); // 字符串转整数
//
//    char arr[100];
//    scanf("%s", arr); // 先读到字符数组
//    string str9 = arr; // 再转成string
//
//    printf("str9 = %s\n", str9.c_str()); // 输出的话要使用 c_str()

    string str10;
    cin >> str10; // 输入字符串
    cout << "str10 = " << str10 << "\n"; // 输出字符串
    return 0;
}