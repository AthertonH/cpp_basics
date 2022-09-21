#include <iostream>

using namespace std;

/*
Why are pointers important?

- They are among the most fundamental topics any programmer should learn
- Pointers are one of the most difficult subjects to master in programming
- Why do you need to see the variable address?
- Enormous amount of programmer skill in who knows pointers
- They are fundamental
- Pointers are the only way that you can see and understand data
- Pointers make it possible to read and manipulate memory

*/

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &age << endl;
    cout << &gpa << endl;
    cout << &name << endl;

    return 0;
}