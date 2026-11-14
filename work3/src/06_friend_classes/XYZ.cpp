#include <iostream>
#include "XYZ.h"
using namespace std;

// 友元成员函数：Y::g 可以直接访问 X 的私有成员 i
void Y::g(X *px) {
    px->i += 1;
}

// 友元类：Z 的所有成员函数都可以访问 X 的私有成员 i
void Z::f(X *px) {
    px->i += 5;
}

// 友元函数：h 不是任何类的成员，但可以访问 X 的私有成员 i
void h(X *px) {
    px->i += 10;
}

void X::show(const char *tag) const {
    cout << tag << "：i = " << i << endl;
}
