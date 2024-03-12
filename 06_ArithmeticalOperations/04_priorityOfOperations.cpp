#include <iostream>

int main()
{
    int a = 8;
    int b = 7;
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;

    int result = a + 5 * ++b;

    std::cout << "Priority: increment, decriment, mul, div, remainder, sum, diff" << std::endl;
    std::cout << "a + 5 * ++b = " << result << std::endl;

    int c = 1;
    std::cout << "c is: " << c << std::endl;
    std::cout << "++c*2 + c++ = " << ++c*2 + c++ << std::endl;
    std::cout << "and then c is: " << c << std::endl;

    int d = 1;
    std::cout << "d is: " << d << std::endl;
    std::cout << "d++*2 + d++ = " << d++*2 + ++d << std::endl;
    std::cout << "and then d is: " << d << std::endl;
    return 0;
}