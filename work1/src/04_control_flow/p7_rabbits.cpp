// 练习4-7 古典问题：兔子繁殖（斐波那契数列）
// 每对兔子从第 3 个月起每月生一对，求 20 个月内每月的兔子总对数。
#include <iostream>
using namespace std;

int main()
{
    long long a = 1, b = 1;   // 第 1、2 个月的兔子对数
    cout << "第 1 个月：1 对" << endl;
    cout << "第 2 个月：1 对" << endl;

    for (int month = 3; month <= 20; ++month) {
        long long c = a + b;
        cout << "第 " << month << " 个月：" << c << " 对" << endl;
        a = b;
        b = c;
    }

    cout << "20 个月时共有 " << b << " 对兔子。" << endl;
    return 0;
}
