#include <iostream>
using namespace std;

void countCall() {
    int normal = 0;        // 普通局部变量，每次调用重新初始化
    static int total = 0;  // 静态局部变量，只初始化一次
    ++normal;
    ++total;
    cout << "普通局部变量：" << normal << "，静态局部变量：" << total << endl;
}

int main() {
    for (int i = 0; i < 3; ++i) {
        countCall();
    }
    return 0;
}
