#include <iostream>

int main ()
{
    // return -1时，echo $? 返回255
    // 这里是由于c++的返回值一般被限定为0~255无符号整数
    // -1的二进制码为0xff，按照无符号整数来解释即为255
    return -1;
}
