// 练习1-6 整型文字常量的应用（课件 补充2-6）
// 观察：dec / oct / hex 操纵符控制输入输出的进制，
//       123、0173、0x7B 是同一个数的不同进制写法。
#include <iostream>
using namespace std;

int main()
{
    int isample, osample, hsample;
    unsigned long ulsample;

    cin >> isample >> oct >> osample >> hex >> hsample;
    cout << isample << ';' << oct << osample << ';' << hex << hsample << endl;

    isample = 123;
    osample = 0173;
    hsample = 0x7B;
    ulsample = 4294967295UL;

    cout << dec << isample << ';' << oct << isample
         << ';' << hex << isample << endl;
    cout << dec << osample << ';' << oct << osample
         << ';' << hex << osample << endl;
    cout << dec << hsample << ';' << oct << hsample
         << ';' << hex << hsample << endl;
    cout << dec << ulsample << ';' << oct << ulsample
         << ';' << hex << ulsample << endl;
    return 0;
}
