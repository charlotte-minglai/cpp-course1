#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.1415926;

double cylinderVolume(double radius, double height);  // 函数声明

int main() {
    double radius = 0.0, height = 0.0;
    cout << "请输入圆柱的半径和高：" << endl;
    cin >> radius >> height;
    if (radius <= 0 || height <= 0) {
        cout << "半径和高必须为正数。" << endl;
        return 1;
    }
    cout << fixed << setprecision(2);
    cout << "圆柱体积：" << cylinderVolume(radius, height) << endl;
    return 0;
}

double cylinderVolume(double radius, double height) {  // 函数定义
    return PI * radius * radius * height;
}
