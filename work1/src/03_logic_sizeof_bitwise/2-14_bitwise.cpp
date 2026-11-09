// 练习3-3 位运算符的应用（课件 补充2-14）
// 观察：按位与置 0、按位或置 1、按位异或翻转指定二进制位。
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << "~15 = " << (~15) << endl;
    cout << "15 & 21 = " << (15 & 21) << endl;
    cout << "15 ^ 21 = " << (15 ^ 21) << endl;
    cout << "15 | 21 = " << (15 | 21) << endl;

    unsigned int nTest = 9;
    cout << "nTest = " << nTest << endl;

    nTest |= 1 << 4;                     // 将第 4 位置为 1
    cout << "After set the position 4 to 1, nTest = " << nTest << endl;

    nTest &= ~(1 << 4);                  // 将第 4 位置为 0
    cout << "After set the position 4 to 0, nTest = " << nTest << endl;

    bool nFlag;
    for (int i = 0; i < 16; i++) {       // 将低 16 位逐位翻转
        nFlag = nTest & (1 << i);
        if (nFlag)
            nTest &= ~(1 << i);
        else
            nTest |= 1 << i;
    }
    cout << "After flip, nTest = " << nTest << endl;
    return 0;
}
