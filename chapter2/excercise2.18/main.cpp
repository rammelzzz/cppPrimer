//
// Created by didi on 2021/4/16.
//
#include <iostream>

int main ()
{
    int val = 1;
    int *pVal = &val;

    // change the value of a pointer
    int val2 = 2;
    pVal = &val2;

    // change the value to which the pointer points
    *pVal = 3;

    // at this point, val = 1, *pVal = 3, val2 = 3
    std::cout << val << " " << *pVal << " " << val2 << std::endl;
}