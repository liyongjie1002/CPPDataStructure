//
//  operateMap.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateMap.hpp"
#include <iostream>
#include <map>
#include <string>

using namespace std;

void operateMap() {
    // 创建一个 map 容器，存储员工的姓名和年龄
    map<string, int> employees;

    // 插入员工信息
    employees["Alice"] = 30;
    employees["Bob"] = 25;
    employees["Charlie"] = 35;

    // 遍历 map 并打印员工信息
    for (map<string, int>::iterator it = employees.begin(); it != employees.end(); ++it) {
        cout << it->first << " is " << it->second << " years old." << endl;
    }
}
