int main () {

    int ival = 1.01;
    // lvalue reference cannot bind to type 'double'
    // int &rval1 = 1.01;
    // lvalue reference cannot bind to type 'int'
    // int &rval11 = 1;
    int &rval2 = ival;
    // lvalue reference must be initialized
    // int &rval3;
}
