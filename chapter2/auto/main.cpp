//
// Created by Administrator on 2021/4/17.
//

int main ()
{
    int val1 = 1, val2 = 2;
    auto item = val1 + val2; // item initialized to the result of val1 + val2

    // error
    // inconsistent type
    auto sz = 0, pi = 3.14;

    int i = 0, &r = i;
    auto a = r; // a is an int


    const int ci = i, &cr = ci;

    auto b = ci; // b is an int (top-level const in ci is dropped
    auto c = cr; // c is an int
    auto d = &i; // d is an int*
    auto e = &ci; // e is const int*


}