// 练习4-3 判断整数是否为回文数
// 将整数各位数字倒序重组，与原数比较。负数因带负号，不是回文数。
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "请输入一个整数：";
    cin >> n;

    if (n < 0) {
        cout << n << " 不是回文数。" << endl;
        return 0;
    }

    long long original = n;
    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed)
        cout << original << " 是回文数。" << endl;
    else
        cout << original << " 不是回文数。" << endl;

    return 0;
}
