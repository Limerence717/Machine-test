//
// Created by LIUSHU on 2025/3/5.
//

// 整数奇偶排序（北京大学复试上机题）

#include <cstdio>
#include <algorithm>

using namespace std;

bool compare(int lhs, int rhs) {
    if (lhs % 2 == 1 && rhs % 2 == 0) {
        return true;
    } else if (lhs % 2 == 1 && rhs % 2 == 1 && lhs > rhs) {
        return true;
    } else if (lhs % 2 == 0 && rhs % 2 == 0 && lhs < rhs) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]); // arr + i
    }
    sort(arr, arr + 10, compare);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}