#include <iostream>
using namespace std;

long long fibRecursive(int n) {
    if (n <= 2) return 1;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

long long fibIterative(int n) {
    if (n <= 2) return 1;
    long long a = 1, b = 1, c = 1;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    cout << "n\t递归\t迭代" << endl;
    for (int n = 1; n <= 20; ++n) {
        cout << n << "\t" << fibRecursive(n) << "\t" << fibIterative(n) << endl;
    }
    return 0;
}
