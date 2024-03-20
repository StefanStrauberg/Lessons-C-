#include <iostream>

int main()
{
    unsigned int color{};
    int ch{};

    std::cout << "Please enter red color number: ";
    std::cin >> ch;
    color |= ch;
    color <<= 8;

    std::cout << "Please enter green color number: ";
    std::cin >> ch;
    color |= ch;
    color <<= 8;

    std::cout << "Please enter blue color number: ";
    std::cin >> ch;
    color |= ch;

    std::cout << "RGB color in number is: " << color << std::endl;

    return 0;
}