//
//  operateArray.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateArray.hpp"
#include <iostream>
#include <array>

using namespace std;

void operateArray() {
    // 创建一个包含 5 个整数的 array
    array<int, 5> myArray = {1, 2, 3, 4, 5};

    // 使用范围 for 循环遍历数组
    for (const auto& value : myArray) {
        cout << value << " ";
    }
    cout << endl;

    // 使用索引访问数组元素
    cout << "Element at index 2: " << myArray.at(2) << endl;

    // 获取数组的大小
    cout << "Array size: " << myArray.size() << endl;

    // 修改数组元素
    myArray[3] = 10;

    // 再次遍历数组以显示修改后的元素
    for (const auto& value : myArray) {
        cout << value << " ";
    }
    cout << endl;
}
