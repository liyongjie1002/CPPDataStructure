//
//  operateForwardList.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateForwardList.hpp"
#include <iostream>
#include <forward_list>

using namespace std;

void operateForwardList() {
    // 创建一个空的 forward_list
    forward_list<int> fl;

    // 在列表前端添加元素
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);

    // 遍历 forward_list 并输出元素
    for (auto it = fl.begin(); it != fl.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 输出结果：30 20 10

}
