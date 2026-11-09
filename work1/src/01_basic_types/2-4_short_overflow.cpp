// 练习1-4 整数变量的定义与输出（课件 补充2-4）
// 观察：50000 超出 short 的表示范围（-32768~32767），赋值后发生溢出。
#include <iostream>
using namespace std;

int main()
{
    short int i;
    unsigned short int j;
    j = 50000;
    i = j;
    cout << "Short int is:" << i << endl;
    cout << "Short unsigned int is: " << j << endl;
    return 0;
}
