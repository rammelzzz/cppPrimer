#include <iostream>

using namespace std;

void swap(int *l, int *r) 
{
    int tmp = *l;
    *l = *r;
    *r = tmp;
}

int main ()
{
    int l = 1, r = 2;
    
    cout << "l = " << l << ", r = " << r << endl;

    swap(&l, &r);

    cout << "l = " << l << ", r = " << r << endl;

    return 0; 
}
