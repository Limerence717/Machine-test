//
// Created by LIUSHU on 2025/2/23.
//

// 链表合并

#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int s1;
    scanf("%d", &s1);
    vector<int> v1(s1);
    for (int i = 0; i < s1; i++) {
        scanf("%d", &v1[i]);
    }
    int s2;
    scanf("%d", &s2);
    vector<int> v2(s2);
    for (int i = 0; i < s2; i++) {
        scanf("%d", &v2[i]);
    }
    vector<int> v3(s1 + s2);
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2) {
        if (v1[i] < v2[j]) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }
    while (i < s1) {
        v3[k] = v1[i];
        i++;
        k++;
    }
    while (j < s2) {
        v3[k] = v2[j];
        j++;
        k++;
    }
    for (int i = 0; i < s1 + s2; i++) {
        printf("%d ", v3[i]);
    }
    return 0;
}