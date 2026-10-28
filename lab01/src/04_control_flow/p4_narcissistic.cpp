// 练习4-4 水仙花数
// 先判断输入的三位数，再输出全部三位水仙花数。
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "请输入一个三位整数：";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "输入的不是三位数。" << endl;
        return 1;
    }

    int a = num / 100;
    int b = num / 10 % 10;
    int c = num % 10;
    int sum = a * a * a + b * b * b + c * c * c;

    cout << num << (sum == num ? " 是" : " 不是") << "水仙花数。" << endl;

    cout << "所有三位水仙花数：";
    for (int i = 100; i <= 999; ++i) {
        int x = i / 100;
        int y = i / 10 % 10;
        int z = i % 10;
        if (x * x * x + y * y * y + z * z * z == i)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
