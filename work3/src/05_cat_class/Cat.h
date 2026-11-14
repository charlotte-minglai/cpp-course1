#ifndef CAT_H
#define CAT_H

#include <string>

class Cat {
private:
    static int numOfCats;      // 静态数据成员：记录当前存在的 Cat 对象数目
    std::string name;          // 普通数据成员：每只猫自己的名字

public:
    Cat(const std::string &n = "cat");
    ~Cat();
    static int getNumOfCats(); // 静态成员函数：读取 numOfCats
    void show() const;
};

#endif  // CAT_H
