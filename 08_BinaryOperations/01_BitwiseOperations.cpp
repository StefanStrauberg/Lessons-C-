#include <iostream>
#include <bitset>

int main()
{
    int value1{0b0000'0011};
    int value2{0b0000'0010};
    int value3{0b0000'0001};
    int result{0b0000'0000};

    std::cout << "value1 is: "
              << "Decimal: "
              << value1
              << " "
              << "Binary: "
              << std::bitset<8>(value1) << std::endl;
    std::cout << "value2 is: "
              << "Decimal: "
              << value2
              << " "
              << "Binary: "
              << std::bitset<8>(value2) << std::endl;
    std::cout << "value3 is: "
              << "Decimal: "
              << value3
              << " "
              << "Binary: "
              << std::bitset<8>(value3) << std::endl;

    result |= value1;
    std::cout << "result |= value1 is: "
              << "Decimal: "
              << result
              << " "
              << "Binary: "
              << std::bitset<8>(result) << std::endl;
    result <<= 2;
    std::cout << "result <= 2 is: "
              << "Decimal: "
              << result
              << " "
              << "Binary: "
              << std::bitset<8>(result) << std::endl;
    result |= value2;
    std::cout << "result |= value2 is: "
              << "Decimal: "
              << result
              << " "
              << "Binary: "
              << std::bitset<8>(result) << std::endl;
    result <<= 2;
    std::cout << "result <= 2 is: "
              << "Decimal: "
              << result
              << " "
              << "Binary: "
              << std::bitset<8>(result) << std::endl;
    result |= value3;
    std::cout << "result |= value3 is: "
              << "Decimal: "
              << result
              << " "
              << "Binary: "
              << std::bitset<8>(result) << std::endl;

    return 0;
}