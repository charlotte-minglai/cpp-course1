#ifndef CTYPE_H
#define CTYPE_H

class Ctype {
private:
    int a;                 // 普通数据成员：每个对象各有一份
    static int s;          // 静态数据成员：所有 Ctype 对象共享一份

public:
    void Print();
    Ctype(int x = 0);      // 默认参数只在声明中写一次
};

#endif  // CTYPE_H
