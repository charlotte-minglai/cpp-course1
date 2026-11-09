#include <iostream>
using namespace std;

bool isPrime(int n);  // 函数声明

int main() {
    int count = 0;
    cout << "1~100 内的素数：" << endl;
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            ++count;
        }
    }
    cout << endl << "共 " << count << " 个。" << endl;
    return 0;
}

bool isPrime(int n) {  // 函数定义
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
