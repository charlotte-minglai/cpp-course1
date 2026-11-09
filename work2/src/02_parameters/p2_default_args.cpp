#include <iostream>
using namespace std;

double power(double base, int exp = 2);  // 默认参数写在声明中

int main() {
    cout << "power(5)      = " << power(5) << endl;
    cout << "power(2, 10)  = " << power(2, 10) << endl;
    cout << "power(1.5, 3) = " << power(1.5, 3) << endl;
    return 0;
}

double power(double base, int exp) {  // 定义中不再重复默认值
    double result = 1.0;
    for (int i = 0; i < exp; ++i) result *= base;
    return result;
}
