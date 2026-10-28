// 练习4-1 企业奖金提成
// 利润 I 分 6 档，按分段累进方式计算奖金（输入、输出单位均为万元）。
#include <iostream>
using namespace std;

int main()
{
    double profit;  // 当月利润，单位：万元
    cout << "请输入当月利润（万元）：";
    cin >> profit;

    if (profit < 0) {
        cout << "利润不能为负数。" << endl;
        return 1;
    }

    double bonus;
    if (profit <= 10)
        bonus = profit * 0.10;
    else if (profit <= 20)
        bonus = 10 * 0.10 + (profit - 10) * 0.075;
    else if (profit <= 40)
        bonus = 10 * 0.10 + 10 * 0.075 + (profit - 20) * 0.05;
    else if (profit <= 60)
        bonus = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
    else if (profit <= 100)
        bonus = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03
                + (profit - 60) * 0.015;
    else
        bonus = 10 * 0.10 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03
                + 40 * 0.015 + (profit - 100) * 0.01;

    cout << "应发放奖金：" << bonus << " 万元（" << bonus * 10000 << " 元）" << endl;
    return 0;
}
