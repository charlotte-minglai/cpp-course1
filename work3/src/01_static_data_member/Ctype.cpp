#include <iostream>
#include "Ctype.h"
using namespace std;

// 静态数据成员必须在类外定义并初始化，定义时前面不能加 static。
// 这一行同时为 s 分配存储空间，并把它初始化为 0。
int Ctype::s = 0;

// 构造函数定义中不能再写默认参数 =0，否则会报“默认参数重定义”。
Ctype::Ctype(int x) {
    a = x;
}

void Ctype::Print() {
    cout << "a=" << ++a << endl;   // a 是普通成员，每个对象各有一份
    cout << "s=" << ++s << endl;   // s 是静态成员，三个对象共用
}
