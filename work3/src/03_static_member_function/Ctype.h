#ifndef CTYPE_H
#define CTYPE_H

class Ctype {
private:
    int a;
    static int s;          // 私有静态数据成员

public:
    static void Print();   // 静态成员函数：没有 this 指针
    void PrintA();         // 普通成员函数：可以通过对象访问 a
    Ctype();
};

#endif  // CTYPE_H
