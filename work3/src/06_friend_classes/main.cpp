#include <iostream>
#include "XYZ.h"
using namespace std;

int main() {
    X x(0);    // X 的私有成员 i 初值为 0
    Y y;
    Z z;

    x.show("初始值");

    y.g(&x);
    x.show("Y::g 加 1 后");

    z.f(&x);
    x.show("Z::f 加 5 后");

    h(&x);
    x.show("h 加 10 后");

    return 0;
}
