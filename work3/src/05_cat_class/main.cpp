#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    // 没有对象时也能通过类名调用静态成员函数。
    cout << "程序开始时，猫的数量：" << Cat::getNumOfCats() << endl;

    Cat tom("Tom");
    Cat jerry("Jerry");
    cout << "创建两只猫后，猫的数量：" << Cat::getNumOfCats() << endl;
    tom.show();
    jerry.show();

    {
        Cat kitty("Kitty");
        cout << "内层作用域中，猫的数量：" << Cat::getNumOfCats() << endl;
        kitty.show();
    }   // kitty 离开作用域，析构函数被自动调用

    cout << "离开内层作用域后，猫的数量：" << Cat::getNumOfCats() << endl;
    cout << "通过对象调用静态成员函数：" << tom.getNumOfCats() << endl;

    return 0;
}
