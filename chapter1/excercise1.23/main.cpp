#include <iostream>
#include "../Sales_items.h"

int main ()
{
    Sales_item book, last;
    int cnt = 0;

    if (std::cin >> book) {
        last = book;
        cnt = 1;
        while (std::cin >> book) {
            if (book.isbn() == last.isbn()) {
                cnt ++;
            } else {
                std::cout << "book " << last.isbn() << " cnt "
                    << cnt << std::endl;

                last = book;
                cnt = 1;
            }
        }

        std::cout << "book " << last.isbn() << " cnt " << cnt << std::endl;
    }

    return 0;
}
