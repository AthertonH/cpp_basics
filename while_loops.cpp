#include <iostream>

using namespace std;

int main()
{
    // Do while loop will execute code before the condition
    // While loop will execute condition before the loop.

    int index = 6;
    do{
        cout << index << endl;
        index++;
    }while(index >= 5);

    return 0;
}