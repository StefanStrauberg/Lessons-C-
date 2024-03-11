#include <iostream>

int main()
{
    int age;
    double weight;

    std::cout << "Enter your age: "; 
    std::cin >> age;
    std::cout << "Enter your wight: ";
    std::cin >> weight;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Weight: " << weight << std::endl;

    return 0;
}