//
// Created by LIUSHU on 2025/2/18.
//

// old bill（上海交通大学复试上机题）

#include <cstdio>

using namespace std;

int main() {
    int n, x, y, z;
    while (scanf("%d %d %d %d", &n, &x, &y, &z) != EOF) {
        int a = 1, b = 0, amount = 0;
        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                int num = i * 10000 + x * 1000 + y * 100 + z * 10 + j;
                if (num % n == 0) {
                    a = i;
                    b = j;
                    amount = num / n;
                }
            }
        }
        if(amount!= 0)
            printf("%d %d %d\n", a, b, amount);
        else
            printf("0");
    }
    return 0;
}