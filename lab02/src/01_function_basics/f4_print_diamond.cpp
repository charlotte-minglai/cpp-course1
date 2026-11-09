#include <iostream>
using namespace std;

void printChars(int count, char ch) {
    for (int i = 0; i < count; ++i) cout << ch;
}

void printDiamond(int halfHeight) {
    for (int i = 1; i <= halfHeight; ++i) {
        printChars(halfHeight - i, ' ');
        printChars(2 * i - 1, '*');
        cout << endl;
    }
    for (int i = halfHeight - 1; i >= 1; --i) {
        printChars(halfHeight - i, ' ');
        printChars(2 * i - 1, '*');
        cout << endl;
    }
}

int main() {
    int n = 0;
    cout << "请输入菱形的半高（1~9）：" << endl;
    cin >> n;
    if (n < 1 || n > 9) {
        cout << "输入超出范围。" << endl;
        return 1;
    }
    printDiamond(n);
    return 0;
}
