#include <iostream>
#include "../Sales_items.h"

int main () 
{

    Sales_item aSale, total;

    if (std::cin >> total) {
        while (std::cin >> aSale) {
            total = total + aSale;
        }
        std::cout << total << std::endl;
    }

    return 0;
}
