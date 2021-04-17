#include <iostream>

using namespace std;

int main ()
{
    int month = 9, day = 7;

    cout << month << endl;
    cout << day << endl;

    // invalid, octal cannot have a numebr larger than 7
    day = 07;
    
    cout << day << endl;

    return 0;
}
