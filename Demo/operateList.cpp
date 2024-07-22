//
//  operateList.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateList.hpp"
#include <iostream>
#include <list>

using namespace std;

void operateList() {
    // 创建一个整数类型的列表
    list<int> numbers;

    // 向列表中添加元素
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // 访问并打印列表的第一个元素
    cout << "First element: " << numbers.front() << endl;

    // 访问并打印列表的最后一个元素
    cout << "Last element: " << numbers.back() << endl;

    // 遍历列表并打印所有元素
    cout << "List elements: ";
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 删除列表中的最后一个元素
    numbers.pop_back();

    // 再次遍历列表并打印所有元素
    cout << "List elements after removing the last element: ";
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
