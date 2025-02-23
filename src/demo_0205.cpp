//
// Created by LIUSHU on 2025/2/23.
//

// 糖果分享游戏（北京大学复试上机题）

#include <cstdio>
#include <vector>

using namespace std;

bool CheckCandy(vector<int> &student) {
    int size = student.size();
    int first = student[0];
    for (int i = 1; i < size; i++) {
        if (student[i] != first) {
            return false;
        }
    }
    return true;
}

void ShareCandy(vector<int> &student) {
    int size = student.size();
    // 分糖果不能先分第一个，再分第二个
    vector<int> share(size); // 保存在交换以前，糖果数量的一半
    for (int i = 0; i < size; i++) {
        share[i] = student[i] / 2;
    }
    for (int i = 0; i < size; i++) {
        student[i] -= share[i];
        student[(i + 1) % size] += share[i];
    }
    for (int i = 0; i < size; i++) {
        if (student[i] % 2 != 0) {
            student[i]++;
        }
    }
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        if (N == 0) break;
        vector<int> student(N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &student[i]);
        }
        int turn = 0;
        while (CheckCandy(student) == false) {
            ShareCandy(student);
            turn++;
        }
        printf("%d %d\n", turn, student[0]);
    }
    return 0;
}