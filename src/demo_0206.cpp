//
// Created by LIUSHU on 2025/2/28.
//

// 阶乘的和（上海交通大学复试上机题）

//用空间换时间 -> 把所有的可能先生成好

#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> factorialArr;
    // 把0!放入数组
    factorialArr.push_back(1);
    int currentFactorial = 1;
    for (int i = 1; i <= 9; i++) {
        // 计算i!
        currentFactorial *= i;
        // 把i!放入数组
        factorialArr.push_back(currentFactorial);
    }
    set<int> allPossible; // 所有的阶乘和的可能性
    allPossible.insert(0); // 0
    for (int i = 0; i <= 9; i++) {
        set<int> tempSet; // 临时集合
        set<int>::iterator it;
        for (it = allPossible.begin(); it != allPossible.end(); it++) {
            tempSet.insert(*it + factorialArr[i]); // 加上i!的所有可能性
        }
        for (it = tempSet.begin(); it != tempSet.end(); it++) {
            allPossible.insert(*it); // 加入到总集合
        }
    }
    allPossible.erase(0); // 去掉0
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n < 0)
            break;
        if (allPossible.count(n) == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}