//
// Created by LIUSHU on 2025/2/23.
//

// 完数与盈数 （清华大学复试上机题）

#include <cstdio>
#include <vector>

using namespace std;

int FactorSum(int i) {
    int res = 0;
    for (int j = 1; j < i; j++) {
        if (i % j == 0) res += j;
    }
    return res;
}

int main() {
    vector<int> Evec; // 完数
    vector<int> Gvec; // 盈数
    for (int i = 2; i <= 60; i++) {
        if (i == FactorSum(i)) {
            Evec.push_back(i);
        } else if (i < FactorSum(i)) {
            Gvec.push_back(i);
        }
    }
    vector<int>::iterator it;
    printf("E:");
    for (it = Evec.begin(); it != Evec.end(); it++) {
        printf(" %d", *it);
    }
    printf("\nG:");
    for (it = Gvec.begin(); it != Gvec.end(); it++) {
        printf(" %d", *it);
    }
    printf("\n");
    return 0;
}