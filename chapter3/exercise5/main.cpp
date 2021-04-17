#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s;
    
    string total;
    while (getline(cin, s)) {
        total += s;
    }

    string word = "";
    for (char x : total) {
        if (x == ' ') {
            cout << word << endl;
            word = "";
        } else {
            word += x;
        }
    }
    cout << word << endl;
    return 0;
}
