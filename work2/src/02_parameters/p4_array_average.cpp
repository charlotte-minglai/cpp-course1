#include <iostream>
#include <iomanip>
using namespace std;

double average(const double scores[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) sum += scores[i];
    return sum / n;
}

double maximum(const double scores[], int n) {
    double m = scores[0];
    for (int i = 1; i < n; ++i) {
        if (scores[i] > m) m = scores[i];
    }
    return m;
}

int main() {
    double scores[] = {88.5, 92.0, 79.0, 95.5, 86.0, 91.0};
    int n = sizeof(scores) / sizeof(scores[0]);
    cout << fixed << setprecision(2);
    cout << "平均分：" << average(scores, n) << endl;
    cout << "最高分：" << maximum(scores, n) << endl;
    return 0;
}
