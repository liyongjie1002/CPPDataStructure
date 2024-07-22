//
//  operatePriorityQueue.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operatePriorityQueue.hpp"
#include <iostream>
#include <queue>

using namespace std;

void operatePriorityQueue() {
    // 创建一个整型优先队列
    priority_queue<int> pq;

    // 向优先队列中添加元素
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // 输出队列中的元素
    cout << "队列中的元素：" << endl;
    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

}
