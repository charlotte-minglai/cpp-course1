#include <iostream>
using namespace std;

int maxOf(int a, int b) {
    return a > b ? a : b;
}

double maxOf(double a, double b) {
    return a > b ? a : b;
}

int maxOf(int a, int b, int c) {
    int m = maxOf(a, b);
    return maxOf(m, c);
}

int main() {
    cout << "maxOf(3, 8)     = " << maxOf(3, 8) << endl;
    cout << "maxOf(3.5, 2.8) = " << maxOf(3.5, 2.8) << endl;
    cout << "maxOf(4, 9, 6)  = " << maxOf(4, 9, 6) << endl;
    return 0;
}
