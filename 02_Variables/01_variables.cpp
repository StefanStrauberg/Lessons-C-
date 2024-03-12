#include <iostream>

int main()
{
    int age1 = 10;
    int age2(20);
    int age3{30};

    std::cout << "Assignment notation: int age1 = "
              << age1
              << std::endl;
    std::cout << "Functional notation: int age2 ("
              << age2
              << ")"
              << std::endl;
    std::cout << "Braced notation: int age3 {"
              << age3
              << "}"
              << std::endl;

    int age11 = 10, age22(20), age33{30};

    std::cout << "We also can define inline several variables like: int age11 = "
              << age11
              << ", age22 ("
              << age22
              << "), age33 {"
              << age33
              << "}" << std::endl;

    return 0;
}