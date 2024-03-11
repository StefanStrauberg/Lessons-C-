#include <iostream>

int main()
{
    double a{1.5}, b{}, c{}, d{-1.5};
    double result{a / b};
    std::cout << a << " / " << b << " = " << result << std::endl;
    result = d / c;
    std::cout << d << " / " << c << " = " << result << std::endl;
    result = b / c;
    std::cout << b << " / " << c << " = " << result << std::endl;

    std::cout << result << " + " << a << " = " << result + a << std::endl;

    return 0;
}