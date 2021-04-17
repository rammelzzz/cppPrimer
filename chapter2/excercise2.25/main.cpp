
#include <iostream>

int main ()
{
    int i = 1;
    int *p = &i, &r = p;    // illegal

    std::cout << i << " " << *p << " " << r << std::endl;
    return 0;
}