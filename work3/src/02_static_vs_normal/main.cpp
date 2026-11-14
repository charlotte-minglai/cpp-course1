#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    Student Student1;
    Student1.Print();
    cout << "----------" << endl;

    Student Student2;
    Student1.Print();
    Student2.Print();
    cout << "----------" << endl;

    Student Student3;
    Student1.Print();
    Student2.Print();
    Student3.Print();
    cout << "----------" << endl;

    Student Student4;
    Student1.Print();
    Student2.Print();
    Student3.Print();
    Student4.Print();

    return 0;
}
