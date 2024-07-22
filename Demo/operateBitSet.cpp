//
//  operateBitSet.cpp
//  Demo
//
//  Created by xdf on 2024/7/22.
//

#include "operateBitSet.hpp"
#include <iostream>
#include <bitset>

using namespace std;

void operateBitSet() {
    bitset<8> b("11001010"); // 从字符串初始化
    cout << "Initial bitset: " << b << endl;

    // 访问特定位置的位
    cout << "Bit at position 3: " << b[3] << endl;

    // 修改位
    b[1] = 0;
    cout << "Modified bitset: " << b << endl;

    // 翻转位
    b.flip();
    cout << "Flipped bitset: " << b << endl;

}
