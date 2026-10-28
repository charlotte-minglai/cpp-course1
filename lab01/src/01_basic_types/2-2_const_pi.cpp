// 练习1-2 为常量命名（课件 补充2-2）
// 观察：符号常量 pi 在运行期间不能修改；去掉 cin >> pi 的注释后编译报错。
#include <iostream>
using namespace std;

int main()
{
    const double pi(3.14159);
    int radius;
    cout << "Please enter the radius!\n";
    cin >> radius;
    cout << "The radius is:" << radius << '\n';
    cout << "PI is:" << pi << '\n';
    cout << "Please enter a different radius!\n";
    cin >> radius;
    cout << "Now the radius is changed to:" << radius << '\n';
    cout << "PI is still:" << pi << '\n';
    // cin >> pi;   // 常量不能被赋值，取消注释将产生编译错误
    return 0;
}
