//
// Created by LIUSHU on 2025/2/18.
//

// XXX定律 （浙江大学复试上机题）

#include <cstdio>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int count = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = (3 * n + 1) / 2;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}