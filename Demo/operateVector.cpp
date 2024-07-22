//
//  operateVector.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateVector.hpp"
#include <iostream>
#include <vector>

void operateVector() {
    // 声明一个存储整数的 vector
    std::vector<int> numbers;

    // 添加元素
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // 输出 vector 中的元素
    std::cout << "Vector contains: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // 添加更多元素
    numbers.push_back(40);
    numbers.push_back(50);

    // 再次输出 vector 中的元素
    std::cout << "After adding more elements, vector contains: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // 访问特定元素
    std::cout << "The first element is: " << numbers[0] << std::endl;

    // 清空 vector
    numbers.clear();

    // 检查 vector 是否为空
    if (numbers.empty()) {
        std::cout << "The vector is now empty." << std::endl;
    }
}
