//
// Created by LIUSHU on 2025/2/23.
//

// 空闲块

#include <cstdio>
#include <list>

using namespace std;

// 定义内存块结构体
struct Block {
    int startPos;  // 内存块的起始位置
    int blockSize; // 内存块的大小
};

int main() {
    list<Block> freeList; // 空闲内存块链表，用于存储所有空闲的内存块
    int n; // 初始空闲内存块的数量
    scanf("%d", &n); // 读取初始空闲内存块的数量

    // 读取并初始化空闲内存块
    for (int i = 0; i < n; ++i) {
        Block block;
        scanf("%d%d", &block.startPos, &block.blockSize); // 读取每个内存块的起始位置和大小
        freeList.push_back(block); // 将内存块加入空闲链表
    }

    int request; // 内存请求的大小
    list<Block>::iterator it; // 用于遍历空闲链表的迭代器

    // 处理内存请求
    while (1) {
        scanf("%d", &request); // 读取内存请求
        if (request == -1) { // 如果请求为 -1，结束循环
            break;
        }

        list<Block>::iterator toAlloc = freeList.end(); // 用于记录找到的合适内存块
        int curLeast = 1e9 + 1; // 用于记录大于请求大小的最小内存块的大小

        // 遍历空闲链表，寻找合适的内存块
        for (it = freeList.begin(); it != freeList.end(); ++it) {
            if (it->blockSize == request) { // 如果找到大小正好等于请求的内存块
                toAlloc = it; // 记录该内存块
                break; // 直接退出循环
            } else if (it->blockSize > request && it->blockSize < curLeast) { // 如果找到大于请求且最小的内存块
                toAlloc = it; // 记录该内存块
                curLeast = it->blockSize; // 更新最小大小
            }
        }

        // 如果找到了合适的内存块
        if (toAlloc != freeList.end()) {
            // 将找到的内存块移动到链表开头
            while (toAlloc != freeList.begin()) {
                Block front = freeList.front(); // 获取链表开头的内存块
                freeList.pop_front(); // 移除链表开头的内存块
                freeList.push_back(front); // 将移除的内存块添加到链表末尾
            }

            // 如果内存块大小正好等于请求大小
            if (toAlloc->blockSize == request) {
                freeList.pop_front(); // 直接移除该内存块
            } else {
                toAlloc->blockSize -= request; // 否则，减少内存块的大小
            }
        }
    }

    // 输出剩余的空闲内存块
    for (it = freeList.begin(); it != freeList.end(); ++it) {
        printf("%d %d\n", it->startPos, it->blockSize); // 打印每个内存块的起始位置和大小
    }

    return 0; // 程序结束
}