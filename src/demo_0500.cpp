//
// Created by LIUSHU on 2025/3/28.
//

// 约瑟夫问题No.2（北京大学复试上机题）

#include <cstdio>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;
    int n, p, m;
    while (1) {
        scanf("%d%d%d", &n, &p, &m);
        if (n == 0 && p == 0 && m == 0) break;

        // 生成第一轮报数的队列
        // p,p+1,p+2,...,n,1,2,3,...,p-1
        int no = p;
        for (int i = 0; i < n; i++) {
            myQueue.push(no);
            no++;
            if (no > n) no = 1;
        }

        // 开始报数
        int say = 1;
        while (1) {
            int cur = myQueue.front();
            myQueue.pop();
            if (say == m) {
                say = 1;
                if (myQueue.empty()) {
                    printf("%d\n", cur);
                    break;
                } else {
                    printf("%d,", cur);
                }
            } else {
                say++;
                myQueue.push(cur);
            }
        }
    }
    return 0;
}