//
//  operateDeque.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateDeque.hpp"
#include <iostream>
#include <deque>

using namespace std;

void operateDeque() {
    deque<int> myDeque;

    // 插入元素
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_front(5);

    // 访问元素
    cout << "Deque contains: ";
    for (int i = 0; i < myDeque.size(); ++i) {
        cout << myDeque[i] << " ";
    }
    cout << endl;

    // 删除元素
    myDeque.pop_back();
    myDeque.pop_front();

    // 再次访问元素
    cout << "Deque after popping: ";
    for (int i = 0; i < myDeque.size(); ++i) {
        cout << myDeque[i] << " ";
    }
    cout << endl;
}
