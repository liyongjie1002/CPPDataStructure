#include <iostream>
#include <queue>
#include "operateDeque.hpp"
#include "operateArray.hpp"
#include "operateList.hpp"
#include "operateVector.hpp"
#include "operateForwardList.hpp"
#include "operateStack.hpp"
#include "operateQueue.hpp"
#include "operatePriorityQueue.hpp"
#include "operateSet.hpp"
#include "operateUnorderedSet.hpp"
#include "operateMap.hpp"
#include "operateUnorderedMap.hpp"
#include "operateBitSet.hpp"

using namespace std;

int main() {
    
    cout << "--------双端队列" <<endl;
    operateDeque();
    
    cout << "--------数组" <<endl;
    operateArray();
    
    cout << "--------列表" <<endl;
    operateList();
    
    cout << "--------动态数组" <<endl;
    operateVector();
    
    cout << "--------栈" <<endl;
    operateStack();
    
    cout << "--------队列" <<endl;
    operateQueue();
    
    cout << "--------优先队列" <<endl;
    operatePriorityQueue();
    
    cout << "--------集合" <<endl;
    operateSet();
    
    cout << "--------非排序集合" <<endl;
    operateUnorderedSet();
    
    cout << "--------哈希表" <<endl;
    operateMap();
    
    cout << "--------非排序哈希表" <<endl;
    operateUnorderedMap();
    
    cout << "--------位集合" <<endl;
    operateBitSet();
    
    return 0;
}
