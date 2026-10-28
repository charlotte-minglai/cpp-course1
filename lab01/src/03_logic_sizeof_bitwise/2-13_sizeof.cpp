// 练习3-2 sizeof 运算符的应用（课件 补充2-13）
// 观察：各基本数据类型在当前编译环境下的字节数。
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "sizeof(short)= " << sizeof(short) << endl;
    cout << "sizeof(unsigned short)= " << sizeof(unsigned short) << endl;
    cout << "sizeof(int)= " << sizeof(int) << endl;
    cout << "sizeof(unsigned int)= " << sizeof(unsigned int) << endl;
    cout << "sizeof(long)= " << sizeof(long) << endl;
    cout << "sizeof(unsigned long)= " << sizeof(unsigned long) << endl;
    cout << "sizeof(float)= " << sizeof(float) << endl;
    cout << "sizeof(double)= " << sizeof(double) << endl;
    cout << "sizeof(long double)= " << sizeof(long double) << endl;
    cout << "sizeof(char)= " << sizeof(char) << endl;
    return 0;
}
