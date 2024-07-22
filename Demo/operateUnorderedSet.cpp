//
//  operateUnorderedSet.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateUnorderedSet.hpp"
#include <iostream>
#include <unordered_set>

using namespace std;

void operateUnorderedSet() {
    // 创建一个整数类型的 unordered_set
    unordered_set<int> uset;

    // 插入元素
    uset.insert(30);
    uset.insert(10);
    uset.insert(20);

    // 打印 unordered_set 中的元素
    cout << "Elements in uset: ";
    for (int elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // 查找元素
    auto it = uset.find(20);
    if (it != uset.end()) {
        cout << "Element 20 found in uset." << endl;
    } else {
        cout << "Element 20 not found in uset." << endl;
    }

    // 删除元素
    uset.erase(20);
    cout << "After erasing 20, elements in uset: ";
    for (int elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    // 检查大小和是否为空
    cout << "Size of uset: " << uset.size() << endl;
    cout << "Is uset empty? " << (uset.empty() ? "Yes" : "No") << endl;

    // 清空 unordered_set
    uset.clear();
    cout << "After clearing, is uset empty? " << (uset.empty() ? "Yes" : "No") << endl;

}
