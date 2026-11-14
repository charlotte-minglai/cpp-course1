#ifndef XYZ_H
#define XYZ_H

class X;   // 前向声明：Y、Z 的成员函数只用到 X*，此处不必看到 X 的完整定义

// Y 的成员函数 g(X*) 将声明为 X 的友元成员函数
class Y {
public:
    void g(X *px);
};

// Z 将声明为 X 的友元类，Z 的所有成员函数都能访问 X 的私有成员
class Z {
public:
    void f(X *px);
};

class X {
private:
    int i;

public:
    X(int value = 0) : i(value) {}
    int getI() const { return i; }
    void show(const char *tag) const;

    friend void h(X *px);       // 全局函数 h 是 X 的友元函数
    friend void Y::g(X *px);    // Y 的成员函数 g 是 X 的友元成员函数
    friend class Z;             // Z 是 X 的友元类
};

void h(X *px);                  // 全局友元函数的声明

#endif  // XYZ_H
