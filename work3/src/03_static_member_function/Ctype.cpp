#include <iostream>
#include "Ctype.h"
using namespace std;

int Ctype::s = 0;

Ctype::Ctype() {
    a = 0;
    s++;
    cout << "a=" << ++a << endl;
}

void Ctype::Print() {
    // 错误原因：静态成员函数没有 this 指针，不能直接访问非静态成员 a。
    // 原程序中的 cout<<"a="<<++a<<endl; 会编译报错。
    // 这里只访问静态成员 s，因此这个函数合法。
    cout << "s=" << ++s << endl;
}

void Ctype::PrintA() {
    // 普通成员函数有 this 指针，可以访问非静态成员 a。
    cout << "a=" << ++a << endl;
}
