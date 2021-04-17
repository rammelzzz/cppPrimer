#include <string>
#include <iostream>

using namespace std;

void readLine();
void readWord();

int main ()
{
    readLine();
    readWord();
}

void readLine() 
{
    string line;
    while (getline(cin, line)) {
        if (!line.empty() && line.size() > 10) {
            cout << line << endl;
        }
    }
}

void readWord()
{
    string word;
    while (cin >> word) {
        cout << word << endl;
    }
}
