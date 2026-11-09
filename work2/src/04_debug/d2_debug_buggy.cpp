#include <iostream>
using namespace std;

// 求数组平均分：本程序有两处逻辑错误，用于调试练习
double average(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {  // 错误 1：少加最后一个元素
        sum += scores[i];
    }
    return sum / n;                     // 错误 2：整数除法截断小数
}

int main() {
    int scores[] = {88, 92, 79, 95, 87};
    int n = sizeof(scores) / sizeof(scores[0]);
    cout << "平均分：" << average(scores, n) << endl;
    return 0;
}
