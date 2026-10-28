// 练习1-3 变量的初始化（课件 补充2-3）
// 观察：在定义变量时直接初始化，可以避免使用未初始化的随机值。
#include <iostream>
using namespace std;

int main()
{
    const double pi(3.14159);
    int radius(0);
    cout << "The initial radius is:" << radius << '\n';
    cout << "PI is:" << pi << '\n';
    cout << "Please enter a different radius!\n";
    cin >> radius;
    cout << "Now the radius is changed to:" << radius << '\n';
    cout << "PI is still:" << pi << '\n';
    return 0;
}
