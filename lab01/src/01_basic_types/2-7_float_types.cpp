// 练习1-7 不同类型浮点数的应用（课件 补充2-7）
// 观察：float / double / long double 的有效位数和 sizeof 大小不同。
#include <iostream>
using namespace std;

const float PI_FLOAT = 3.1415926f;
const double PI_DOUBLE = 3.1415926;
const long double PI_LDOUBLE = 3.1415926L;   // 建议加 L 后缀

int main()
{
    float nRadiusFloat = 5.5f, nAreaFloat;
    double nRadiusDouble = 5.5, nAreaDouble;
    long double nRadiusLDouble = 5.5L, nAreaLDouble;

    nAreaFloat = PI_FLOAT * nRadiusFloat * nRadiusFloat;
    nAreaDouble = PI_DOUBLE * nRadiusDouble * nRadiusDouble;
    nAreaLDouble = PI_LDOUBLE * nRadiusLDouble * nRadiusLDouble;

    cout << "nAreaFloat = " << nAreaFloat
         << " , sizeof(nAreaFloat) = " << sizeof(nAreaFloat) << endl;
    cout << "nAreaDouble = " << nAreaDouble
         << " , sizeof(nAreaDouble) = " << sizeof(nAreaDouble) << endl;
    cout << "nAreaLDouble = " << nAreaLDouble
         << " , sizeof(nAreaLDouble) = " << sizeof(nAreaLDouble) << endl;
    return 0;
}
