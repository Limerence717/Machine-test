//
// Created by LIUSHU on 2025/3/7.
//

// 查找 （北京邮电大学复试上机题）

#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    /*sort(a.begin(), a.end());
    int m;
    scanf("%d", &m);
    int b;
    for (int i = 0; i < m; i++) {
        scanf("%d", &b);
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (a[mid] == b) {
                printf("YES\n");
                break;
            } else if (a[mid] < b) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (left > right) {
            printf("NO\n");
        }
    }*/
    map<int, int> findA;
    for (int i = 0; i < n; i++) {
        findA.insert({a[i], i});
    }
    int m;
    scanf("%d", &m);
    int b;
    for (int i = 0; i < m; i++) {
        scanf("%d", &b);
        if (findA.find(b) == findA.end()) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}