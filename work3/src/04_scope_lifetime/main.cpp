#include <iostream>
using namespace std;

int x = 5, y = 7;          // 全局变量：作用域从定义处到文件末尾，生存期贯穿整个程序

void myFunction() {
    int y = 10;            // 局部变量，遮蔽（隐藏）同名的全局变量 y
    cout << "x from myFunction " << x << "\n";
    cout << "y from myFunction " << y << "\n\n";
}                          // 局部 y 离开作用域后被销毁，全局 y 不受影响

int main() {
    cout << "x from main " << x << "\n";
    cout << "y from main " << y << "\n";

    myFunction();

    cout << "Back from myFunction!\n\n";
    cout << "x from main " << x << "\n";
    cout << "y from main " << y << "\n";

    return 0;
}
