// 练习2-1 算术运算（课件 补充2-10）
// 观察：整数相除取整、% 只能用于整数、++/-- 前置与后置的区别。
#include <iostream>
using namespace std;

int main()
{
    int val1 = 24;
    int val2 = 5;
    double val3 = 24;
    double val4 = 5;

    cout << "int/int, 24/5= " << val1 / val2 << endl;
    cout << "int/int, 24%5= " << val1 % val2 << endl;

    val2 = -5;
    cout << "int/int, 24%(-5)= " << val1 % val2 << endl;

    cout << "double/double, 24/5= " << val3 / val4 << endl;
    // cout << "double/double, 24%5= " << val3 % val4 << endl;  // 浮点数不能取模

    cout << "double/int, 24/5= " << val3 / val2 << endl;
    cout << "int/double, 24/5= " << val1 / val4 << endl;

    val1 = 5;
    cout << "val1 = " << val1 << endl;
    cout << val1++ << ", ";
    cout << ++val1 << ", ";
    cout << val1-- << ", ";
    cout << --val1 << endl;

    val1 = 5;
    cout << "val1 = " << val1 << endl;
    cout << val1++ << ", " << ++val1 << ", "
         << val1-- << ", " << --val1 << endl;
    // 注意：同一表达式中多次修改同一变量，求值顺序因编译器而异
    return 0;
}
