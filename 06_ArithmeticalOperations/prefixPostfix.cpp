#include <iostream>

int main()
{
    int a1 {8};
    int b1 {++a1};
    std::cout << "Prefix increment" << std::endl;
    std::cout << "a1 = " << a1 << std::endl;
    std::cout << "b1 = " << b1 << std::endl;

    int a2 {8};
    int b2 {a1++};
    std::cout << "Postfix increment" << std::endl;
    std::cout << "a2 = " << a2 << std::endl;
    std::cout << "b2 = " << b2 << std::endl;

    int a3 {8};
    int b3 {--a3};
    std::cout << "Prefix decriment" << std::endl;
    std::cout << "a3 = " << a3 << std::endl;
    std::cout << "b3 = " << b3 << std::endl;


    int a4 {8};
    int b4 {a4--};
    std::cout << "Postfix decriment" << std::endl;
    std::cout << "a4 = " << a4 << std::endl;
    std::cout << "b4 = " << b4 << std::endl;
    return 0;
}