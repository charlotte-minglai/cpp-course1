#include <iostream>
#include "Student.h"
using namespace std;

// 静态数据成员在类外定义并初始化，前面不能加 static。
int Student::count = 0;

Student::Student() {
    ++count;               // 每构造一个对象，共享的 count 加 1
    StudentNo = count;     // 学号取当前总数：1、2、3、4
}

void Student::Print() {
    cout << "Student" << StudentNo << " ";
    cout << "count=" << count << endl;
}
