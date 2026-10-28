// 练习4-5 数列 a, aa, aaa, ... 前 n 项求和
// 第 i 项由前一项乘 10 再加 a 得到。
#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "请输入项数 n 和数字 a（1~9）：";
    cin >> n >> a;

    if (n <= 0 || a < 1 || a > 9) {
        cout << "输入不合法：n 应为正整数，a 应为 1~9。" << endl;
        return 1;
    }

    long long term = 0;
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        term = term * 10 + a;
        sum += term;
        if (i > 1)
            cout << " + ";
        cout << term;
    }
    cout << " = " << sum << endl;

    return 0;
}
