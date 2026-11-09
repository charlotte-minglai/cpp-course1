// 练习4-8 猴子吃桃
// 每天吃掉前一天剩下的一半再加一个，第 10 天早上剩 1 个。
// 逆推：前一天的数量 = (当天剩余 + 1) * 2。
#include <iostream>
using namespace std;

int main()
{
    int peaches = 1;   // 第 10 天早上剩下的桃子数

    for (int day = 9; day >= 1; --day) {
        peaches = (peaches + 1) * 2;
        cout << "第 " << day << " 天开始时有 " << peaches << " 个桃子" << endl;
    }

    cout << "第一天共摘了 " << peaches << " 个桃子。" << endl;
    return 0;
}
