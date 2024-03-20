#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
    unsigned int color{0x04F1A2};
    unsigned char mask{0xFF};

    std::cout << "Color is (decimal): " << color << std::endl;
    std::cout << "Color is (hex): " << std::hex << color << std::endl;
    std::cout << "Color is (binary): " << std::bitset<32>(color) << std::endl;

    unsigned int red {(color >> 16) & mask};
    unsigned int green {(color >> 8) & mask};
    unsigned int blue {color & mask};

    std::cout << "Red (decimal): " << std::dec << red << std::endl;
    std::cout << "Red (hex): " << std::hex << red << std::endl;
    std::cout << "Red (binary): " << std::bitset<32>(red) << std::endl;
    std::cout << "Green (decimal): " << std::dec << green << std::endl;
    std::cout << "Green (hex): " << std::hex << green << std::endl;
    std::cout << "Green (binary): " << std::bitset<32>(green) << std::endl;
    std::cout << "Blue (decimal): " << std::dec << blue << std::endl;
    std::cout << "Blue (hex): " << std::hex << blue << std::endl;
    std::cout << "Blue (binary): " << std::bitset<32>(blue) << std::endl;

    return 0;
}