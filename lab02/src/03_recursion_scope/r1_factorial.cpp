#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    if (n <= 1) return 1;
    return static_cast<unsigned long long>(n) * factorial(n - 1);
}

int main() {
    for (int n = 0; n <= 20; ++n) {
        cout << n << "! = " << factorial(n) << endl;
    }
    return 0;
}
