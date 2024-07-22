//
//  operateUnorderedMap.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateUnorderedMap.hpp"
#include <iostream>
#include <unordered_map>

using namespace std;

void operateUnorderedMap() {
    // 创建一个 unordered_map，键为 int，值为 string
    unordered_map<int, string> myMap;

    // 插入一些键值对
    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    // 打印所有元素
    for (const auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // 访问特定键的值
    cout << "Value for key 2: " << myMap[2] << endl;

    // 删除键为1的元素
    myMap.erase(1);

    // 再次打印所有元素
    cout << "After erasing key 1:" << endl;
    for (const auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

}
