#include <iostream>
#include <bitset>

int main()
{
    std::cout << "-= Program is packing and unpucking characters into int value =-" << std::endl;

    int container{};
    char ch;

    std::cout << "Please enter characters:" ;
    std::cin >> ch;
    container |= ch;
    container <<= 8;
    std::cout << "Container is: " << std::bitset<32>(container) << " (Binary)" << std::endl;

    std::cout << "Please enter characters:" ;
    std::cin >> ch;
    container |= ch;
    container <<= 8;
    std::cout << "Container is: " << std::bitset<32>(container) << " (Binary)" << std::endl;

    std::cout << "Please enter characters:" ;
    std::cin >> ch;
    container |= ch;
    std::cout << "Container is: " << std::bitset<32>(container) << " (Binary)" << std::endl;

    unsigned int mask {0xFF};

    ch = container & mask;
    container >>= 8;
    std::cout << "You've entered: " << ch << std::endl;
    std::cout << "Container is: " << std::bitset<32>(container) << " (Binary)" << std::endl;

    ch = container & mask;
    container >>= 8;
    std::cout << "You've entered: " << ch << std::endl;
    std::cout << "Container is: " << std::bitset<32>(container) << " (Binary)" << std::endl;

    ch = container & mask;
    std::cout << "You've entered: " << ch << std::endl;
    std::cout << "Container is: " << std::bitset<32>(container) << " (Binary)" << std::endl;

    return 0;
}