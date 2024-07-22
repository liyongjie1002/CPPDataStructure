//
//  operateSet.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateSet.hpp"
#include <iostream>
#include <set>

using namespace std;

void operateSet() {
    // 声明一个整型 set 容器
    set<int> mySet;

    // 插入元素
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(40);

    // 输出 set 中的元素
    cout << "Set contains: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    // 查找元素
    if (mySet.find(20) != mySet.end()) {
        cout << "20 is in the set." << endl;
    } else {
        cout << "20 is not in the set." << endl;
    }

    // 删除元素
    mySet.erase(20);

    // 再次输出 set 中的元素
    cout << "After erasing 20, set contains: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    // 检查 set 是否为空
    if (mySet.empty()) {
        cout << "The set is empty." << endl;
    } else {
        cout << "The set is not empty." << endl;
    }

    // 输出 set 中元素的数量
    cout << "The set contains " << mySet.size() << " elements." << endl;

}
