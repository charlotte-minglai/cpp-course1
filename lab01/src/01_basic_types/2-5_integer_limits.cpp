// 练习1-5 不同类型整数的最值（课件 补充2-5）
// 观察：<climits> 中定义的符号常量给出了各整数类型的最小值和最大值。
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "Min of short is: " << SHRT_MIN << endl;
    cout << "Max of short is: " << SHRT_MAX << endl;
    cout << "Min of int is: " << INT_MIN << endl;
    cout << "Max of int is: " << INT_MAX << endl;
    cout << "Min of long is: " << LONG_MIN << endl;
    cout << "Max of long is: " << LONG_MAX << endl;
    cout << "Max of unsigned short is: " << USHRT_MAX << endl;
    cout << "Max of unsigned int is: " << UINT_MAX << endl;
    cout << "Max of unsigned long is: " << ULONG_MAX << endl;
    return 0;
}
