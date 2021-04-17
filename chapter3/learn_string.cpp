//
// Created by Administrator on 2021/4/17.
//
#include <string>

using std::string, using std::cin, using std::cout;
using std::endl;

int main ()
{
    string s1;
    string s2 = s1;
    string s3(s1);
    // direct initialization
    string s4("value");
    // copy initialize
    string s5 = "value";
    string s6(10, 'c');
}

void readUseOperator()
{
    string s;
    cin >> s;
    // if input is 'Hello world', output will be 'Hello'
    cout << s << endl;
}

void readUseGetLine() 
{
    string line;
    while (getline(cin, line))
        cout << line << endl;

}

void sizeAndEmpty()
{
    string line;
    // size() return type string::size_type
    while (getline(cin, line)) {
        if (!line.empty() && line.size() > 10) {
            cout << line << endl;
        }
    }
}


