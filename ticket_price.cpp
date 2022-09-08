#include <iostream>
#include <cmath>

using namespace std;


const double TICKET_PRICE = 65.45;
const double TAX = 1.085;

int main()
{
    
    int tickets = 0;
    
    cout << "How many tickets would you like to purchase at $" << TICKET_PRICE << endl;
    cin >> tickets;
    cout << "You are purchasing " << tickets << endl;
    cout << "The price without tax is: $" << tickets*TICKET_PRICE << endl;
    cout << "The price with tax is: $" << tickets*TICKET_PRICE*TAX << endl;

    return 0;
}