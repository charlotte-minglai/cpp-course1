#include "Ctype.h"

int main() {
    Ctype c1, c2, c3;

    // 三个对象的 a 互不影响，但 s 是同一个静态数据成员。
    c1.Print();
    c2.Print();
    c3.Print();

    return 0;
}
