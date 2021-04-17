#include <iostream>
using namespace std;
int main ()
{
    std::cout << 'a' << std::endl;
    std::cout << L'a' << std::endl;
    std::cout << "a" << std::endl;
    std::cout << L"a" << std::endl;

    cout << 10 << endl;
    cout << 10u << endl;
    cout << 10L << endl;
    cout << 10uL << endl;
    cout << 012 << endl;
    cout << 0xC << endl;

    cout << 3.14 << endl;
    cout << 3.14f << endl;
    cout << 3.14L << endl;
    cout << 10. << endl;
    cout << 10e-2 << endl;

    return 0;
}
