//
// Created by LIUSHU on 2025/3/8.
//

// W的密码（北京大学复试上机题）

#include <cstdio>
#include <string>
#include <vector>

using namespace std;

void Partition(string str, vector<int> &vec1, vector<int> &vec2, vector<int> &vec3) {
    int i;
    for (i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'i') {
            vec1.push_back(i);
        } else if (str[i] >= 'j' && str[i] <= 'r') {
            vec2.push_back(i);
        } else {
            vec3.push_back(i);
        }
    }
}

void RightRotate(string &str, vector<int> &vec, int offset) {
    vector<char> tmp;
    // 处理offset超出范围的情况
    if (vec.size() != 0 && offset > vec.size()) {
        offset = offset % vec.size();
    }
    for (int i = vec.size() - offset; i < vec.size(); i++) {
        tmp.push_back(str[vec[i]]);
    }
    for (int i = vec.size() - offset - 1; i >= 0; i--) {
        str[vec[i + offset]] = str[vec[i]];
    }
    for (int i = 0; i < tmp.size(); i++) {
        str[vec[i]] = tmp[i];
    }
}

int main() {
    string str;
    int k1, k2, k3;
    while (scanf("%d %d %d", &k1, &k2, &k3) != EOF) {
        if (k1 == 0 && k2 == 0 && k3 == 0) break;
        char arr[1000] = {0};
        scanf("%s", arr);
        str = arr;
        vector<int> vec1, vec2, vec3;
        // vec1 存储1分组再str中的下标
        Partition(str, vec1, vec2, vec3);
        // 右旋转vec1
        RightRotate(str, vec1, k1);
        // 右旋转vec2
        RightRotate(str, vec2, k2);
        // 右旋转vec3
        RightRotate(str, vec3, k3);
        // 输出结果
        printf("%s\n", str.c_str());
    }
    return 0;
}