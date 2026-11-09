#include <iostream>
using namespace std;

// 修正后的平均分函数
double average(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {         // 修正 1：遍历全部 n 个元素
        sum += scores[i];
    }
    return static_cast<double>(sum) / n;  // 修正 2：先转换为 double 再相除
}

int main() {
    int scores[] = {88, 92, 79, 95, 87};
    int n = sizeof(scores) / sizeof(scores[0]);
    cout << "平均分：" << average(scores, n) << endl;
    return 0;
}
