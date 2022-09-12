#include <iostream>

using namespace std;

void sayHi(string name)
{
    cout << "Hello " << name;
}

int main()
{
    cout << "Top";
    sayHi("harrison");
    cout << "bottom";

    return 0;
}