// 练习4-2 根据电影评分输出评价
// 10~9 经典，8~7 非常好，6~5 一般，5 以下烂片。
#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请输入电影评分（0~10）：";
    cin >> score;

    if (score < 0 || score > 10) {
        cout << "评分无效，请输入 0~10 之间的整数。" << endl;
        return 1;
    }

    if (score >= 9)
        cout << "你认为电影经典" << endl;
    else if (score >= 7)
        cout << "你认为电影非常好" << endl;
    else if (score >= 5)
        cout << "你认为电影一般" << endl;
    else
        cout << "你认为电影是烂片" << endl;

    return 0;
}
