#include <iostream>

int main()
{
    int num1{10};
    int num2{7};

    int sum = num1 + num2;
    int diff = num1 - num2;
    int mul = num1 * num2;
    int divInt = num1 / num2;
    float divFloat = (float)num1 / num2;
    double divDouble = (double)num1 / num2;

    std::cout << "Sum of 10 and 7 is: " << sum << std::endl;
    std::cout << "Diff of 10 and 7 is: " << diff << std::endl;
    std::cout << "Mul of 10 and 7 is: " << mul << std::endl;
    std::cout << "Div of 10 and 7 is: " << divInt  << " as integer" << std::endl;
    std::cout << "Div of 10 and 7 is: " << divFloat  << " as float" << std::endl;
    std::cout << "Div of 10 and 7 is: " << divDouble  << " as double" << std::endl;

    return 0;
}