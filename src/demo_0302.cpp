//
// Created by LIUSHU on 2025/3/5.
//

// 成绩排序 （清华大学复试上机题）

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
struct Student {
    char name[20];
    int score;
    int seq;
};

bool compare0(Student lhs, Student rhs) { // 0 表示从高到低
    if (lhs.score > rhs.score)
        return true;
    else if (lhs.score == rhs.score && lhs.seq < rhs.seq)
        return true;
    else
        return false;
}

bool compare1(Student lhs, Student rhs) { // 1 表示从低到高
    if (lhs.score < rhs.score)
        return true;
    else if (lhs.score == rhs.score && lhs.seq < rhs.seq)
        return true;
    else
        return false;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<Student> vec(n);
    int flag;
    scanf("%d", &flag);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", vec[i].name, &vec[i].score);
        vec[i].seq = i + 1;
    }
    if (flag == 0) {
        sort(vec.begin(), vec.end(), compare0);
    } else {
        sort(vec.begin(), vec.end(), compare1);
    }
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", vec[i].name, vec[i].score);
    }
    return 0;
}