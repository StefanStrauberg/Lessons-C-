#include <iostream>

int main()
{
    std::cout << "-= Program is calculating body mass index =-" << std::endl;
    int height{};
    double weight{};
    std::cout << "Please enter your height in sm: ";
    std::cin >> height;
    std::cout << "Please enter your weight in kg: ";
    std::cin >> weight;
    std::cout << "Your body mass index is: " << weight / (height * height) << std::endl;
    return 0;
}