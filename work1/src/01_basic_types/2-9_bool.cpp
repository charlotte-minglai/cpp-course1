// 练习1-9 定义 bool 类型变量并进行算术运算（课件 补充2-9）
// 观察：bool 输出为 1/0；整数 0 转换为 false，非 0 值转换为 true。
#include <iostream>
using namespace std;

int main()
{
    bool bV1 = true, bV2 = false;
    cout << "bool value bV1 = " << bV1 << endl;
    cout << "bool value bV2 = " << bV2 << endl;

    int nV1 = bV1, nV2 = 0;
    bV1 = nV2;
    cout << "int value nV1 = " << nV1 << endl;
    cout << "bool value bV1 = " << bV1 << endl;
    return 0;
}
