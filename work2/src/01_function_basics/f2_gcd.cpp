#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int data[5][2] = {{12, 18}, {100, 75}, {17, 5}, {0, 9}, {-24, 36}};
    for (int i = 0; i < 5; ++i) {
        cout << "gcd(" << data[i][0] << ", " << data[i][1] << ") = "
             << gcd(data[i][0], data[i][1]) << endl;
    }
    return 0;
}
