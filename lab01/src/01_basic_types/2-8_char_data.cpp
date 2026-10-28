// 练习1-8 字符数据的应用（课件 补充2-8）
// 观察：字符常量、字符串常量以及 \t \b \a 等转义序列的效果。
#include <iostream>
using namespace std;

int main()
{
    cout << 'A' << ' ' << 'a' << endl;   // 输出普通字符
    cout << "one\ttwo\tthree\n";         // 使用水平制表符
    cout << "123\b\b45\n";               // 使用退格符
    cout << "Alert\a\n";                 // 使用响铃符
    return 0;
}
