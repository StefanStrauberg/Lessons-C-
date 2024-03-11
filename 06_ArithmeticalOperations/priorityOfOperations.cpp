#include <iostream>

int main()
{
    int a = 8;
    int b = 7;
    int result = a + 5 * ++b;
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "Priority: increment, decriment, mul, div, remainder, sum, diff" << std::endl;
    std::cout << "a + 8 * ++b = " << result << std::endl;
    return 0;
}