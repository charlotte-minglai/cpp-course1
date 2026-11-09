#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int t = a;
    a = b;
    b = t;
    cout << "值传递函数内部：a = " << a << ", b = " << b << endl;
}

void swapByReference(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
    cout << "引用传递函数内部：a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 3, y = 8;
    cout << "调用前：x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "值传递调用后：x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "引用传递调用后：x = " << x << ", y = " << y << endl;
    return 0;
}
