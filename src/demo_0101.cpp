//
// Created by LIUSHU on 2025/2/14.
//

//  反序数 （清华大学复试上机题）

#include <stdio.h>

using namespace std;

//int main() {
//    int n, a, b, c, d;
//    for (n = 1000; n <= 9999; n++) {
//        a = n % 10;  // 取个位数
//        b = n / 10 % 10;  // 取十位数
//        c = n / 100 % 10;  // 取百位数
//        d = n / 1000;  // 取千位数
//        if ((9 * n) == (a * 1000 + b * 100 + c * 10 + d)) {
//            printf("%d\n", n);
//        }
//    }
//    return 0;
//}
int Reverse(int n) {
    int reverse = 0;
    int remain;
//    while (n > 0) {
//        remain = n % 10;
//        n /= 10;
//        reverse = reverse * 10 + remain;
//    }
    while (true) {
        remain = n % 10;
        n /= 10;
        reverse = reverse * 10 + remain;
        if (n == 0) break;
    }
    return reverse;
}

int main() {
    int n;
    for (n = 1000; n <= 9999; n++) {
        if ((9 * n) == Reverse(n)) {
            printf("%d\n", n);
        }
    }
    return 0;
}