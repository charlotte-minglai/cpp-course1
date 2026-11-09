// 练习3-1 比较数据并输出结果（课件 补充2-12）
// 观察：关系运算、相等运算、逻辑运算的结果都是 bool 类型，输出为 1/0。
#include <iostream>
using namespace std;

int main()
{
    int ival1 = 1, ival2 = 2, ival3 = 3, ival4 = 4;
    bool nFlag;

    nFlag = ival1 == ival2 ? true : false;
    cout << "Is 1 equals 2?: " << nFlag << endl;

    nFlag = ival1 < ival2 ? true : false;
    cout << "Is 1 less than 2?: " << nFlag << endl;

    nFlag = (ival1 < ival2 && ival3 < ival4) ? true : false;
    cout << "Is 1 less than 2 and 3 less than 4: " << nFlag << endl;
    return 0;
}
