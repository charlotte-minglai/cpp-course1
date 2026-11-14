#include <iostream>
#include "Cat.h"
using namespace std;

int Cat::numOfCats = 0;        // 静态数据成员在类外定义并初始化

Cat::Cat(const string &n) : name(n) {
    ++numOfCats;               // 每创建一个对象，总数加 1
    cout << "创建 Cat：" << name << "，当前数量 " << numOfCats << endl;
}

Cat::~Cat() {
    --numOfCats;               // 对象销毁时，总数减 1
    cout << "销毁 Cat：" << name << "，当前数量 " << numOfCats << endl;
}

int Cat::getNumOfCats() {
    return numOfCats;          // 静态成员函数直接访问静态数据成员
}

void Cat::show() const {
    // 普通成员函数既能访问普通成员 name，也能访问静态成员 numOfCats。
    cout << "我是 " << name << "，现在共有 " << numOfCats << " 只猫" << endl;
}
