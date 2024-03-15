#include <iostream>

int main()
{
    std::cout << "-= Program is exchanging money from BYN to USD =-" << std::endl;
    double course{};
    double money{};
    std::cout << "Please enter the current exchange rate: ";
    std::cin >> course;
    std::cout << "Please Enter the amount in BYN: ";
    std::cin >> money;
    std::cout << money << " BYN " << "is " << money / course << " USD" << std::endl;
    return 0;
}