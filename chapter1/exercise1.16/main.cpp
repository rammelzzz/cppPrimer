#include <iostream>

int main () 
{
    int val, sum = 0;

    /*
     * std::cin >> val的返回值实际上是std::cin这个istream，将
     */
    while (std::cin >> val) {
        sum += val;
    }

    std::cout << "sum of inputs is " << sum << std::endl;
    return 0;
}
