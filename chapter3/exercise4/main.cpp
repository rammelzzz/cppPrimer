//
// Created by Administrator on 2021/4/17.
//

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() == s2.size()) {
        cout << "s1'size equals to s2" << endl;
    } else if (s1.size() > s2.size()) {
        cout << "s1's size larger than s2's" << endl;
    } else {
        cout << "s1's size shorter than s2's" << endl;
    }

    return 0;
}