#include <iostream>
#include "Ctype.h"
using namespace std;

int main() {
    // 还没有定义任何对象，可以直接通过类名调用静态成员函数。
    Ctype::Print();

    Ctype c1, c2;
    c1.Print();        // 也可以用对象调用静态成员函数
    c2.Print();

    c1.PrintA();       // 普通成员函数必须通过对象调用
    c2.PrintA();

    Ctype c3;
    c3.Print();
    c3.PrintA();

    return 0;
}
