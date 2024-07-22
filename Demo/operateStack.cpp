//
//  operateStack.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateStack.hpp"
#include <iostream>
#include <stack>

using namespace std;

void operateStack() {
    stack<int> s;

    // 向栈中添加元素
    s.push(1);
    s.push(2);
    s.push(3);

    // 访问栈顶元素
    cout << "Top element is: " << s.top() << endl;

    // 移除栈顶元素
    s.pop();
    cout << "After popping, top element is: " << s.top() << endl;

    // 检查栈是否为空
    if (!s.empty()) {
        cout << "Stack is not empty." << endl;
    }

    // 打印栈的大小
    cout << "Size of stack: " << s.size() << endl;

}
