#include <iostream>
using namespace std;

int moveCount = 0;  // 全局变量记录移动次数

void hanoi(int n, char from, char via, char to) {
    if (n == 1) {
        ++moveCount;
        cout << "第 " << moveCount << " 步：" << from << " -> " << to << endl;
        return;
    }
    hanoi(n - 1, from, to, via);
    ++moveCount;
    cout << "第 " << moveCount << " 步：" << from << " -> " << to << endl;
    hanoi(n - 1, via, from, to);
}

int main() {
    int n = 0;
    cout << "请输入圆盘个数（1~6）：" << endl;
    cin >> n;
    if (n < 1 || n > 6) {
        cout << "输入超出范围。" << endl;
        return 1;
    }
    hanoi(n, 'A', 'B', 'C');
    cout << "共移动 " << moveCount << " 次。" << endl;
    return 0;
}
