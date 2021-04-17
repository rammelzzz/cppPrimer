#include <iostream>

void swap(int *left, int *right) 
{
    int tmp = *left;
    *left = *right;
    *right = tmp;
}


int main() 
{
    int left, right;

    std::cout << "Enter two numbers: " << std::endl;

    std::cin >> left >> right;

    if (left > right) {
        swap(&left, &right);
    }

    int val = left;
    while (val <= right) {
        std::cout << val << " ";
        ++ val;
    }

    std::cout << std::endl;
    return 0;
}
