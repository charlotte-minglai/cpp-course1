// 练习1-1 读入并显示整数（课件 补充2-1）
// 观察：cin 从键盘读入数据；变量 radius 的值在运行过程中可以改变。
#include <iostream>
using namespace std;

int main()
{
    int radius;
    cout << "Please enter the radius!\n";
    cin >> radius;
    cout << "The radius is:" << radius << '\n';
    cout << "PI is:" << 3.14 << '\n';
    cout << "Please enter a different radius!\n";
    cin >> radius;
    cout << "Now the radius is changed to:" << radius << '\n';
    return 0;
}
