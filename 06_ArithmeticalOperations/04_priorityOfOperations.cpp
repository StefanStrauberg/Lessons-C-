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

    a = 8;
    b = 7;
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;

    result = a + 5 * b++;

    std::cout << "Priority: increment, decriment, mul, div, remainder, sum, diff" << std::endl;
    std::cout << "a + 5 * b++ = " << result << std::endl;

    int c = 1;
    std::cout << "c is: " << c << std::endl;
    std::cout << "++c*2 + c++ = " << ++c*2 + c++ << std::endl;
    std::cout << "and then c is: " << c << std::endl;

    c = 1;
    std::cout << "c is: " << c << std::endl;
    std::cout << "c++*2 + c++ = " << c++*2 + c++ << std::endl;
    std::cout << "and then c is: " << c << std::endl;

    c = 1;
    std::cout << "c is: " << c << std::endl;
    std::cout << "c++*2 + ++c = " << c++*2 + ++c << std::endl;
    std::cout << "and then c is: " << c << std::endl;

    c = 1;
    std::cout << "c is: " << c << std::endl;
    std::cout << "++c*2 + ++c = " << ++c*2 + ++c << std::endl;
    std::cout << "and then c is: " << c << std::endl;
    return 0;
}