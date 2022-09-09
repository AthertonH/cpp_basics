#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string a, b, c, d, e, f;

    cout << "Enter an adjective. ";
    getline(cin, a);
    cout << "Enter a noun.";
    getline(cin, b);
    cout << "Enter a past tense verb. ";
    getline(cin, c);
    cout << "Enter an adverb. ";
    getline(cin, d);
    cout << "Enter an adjective. ";
    getline(cin, e);
    cout << "Enter a noun. ";
    getline(cin, f);
    

    cout << "Today I Went to the zoo. I saw a(n) " << a << " " << b << endl;
    cout << "jumping up and down in its tree." << endl;
    cout << "He " << c << " " << d << " through the large tunnel that led to its" << endl;
    cout << e << " " << f << ".";



    return 0;
}