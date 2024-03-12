#include <iostream>

int main()
{
    double radius{};
    double pi{3.14};

    std::cout << "-= Program is calculating square from radius of a circle =-" << std::endl;
    std::cout << "Enter redius: ";
    std::cin >> radius;

    double square{  pi * radius * radius};

    std::cout << "You have entered: "
              << radius
              << " radius "
              << " and square is: "
              << square
              << std::endl;

    return 0;
}