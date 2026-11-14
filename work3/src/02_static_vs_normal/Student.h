#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    static int count;      // 静态数据成员：统计学生的总数
    int StudentNo;         // 普通数据成员：每个学生自己的学号

public:
    Student();
    void Print();
};

#endif  // STUDENT_H
