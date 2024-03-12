#include <iostream>

int main()
{
    unsigned int num{25};   // By default literal 25 is is signed int
                            // In this case compiler implicit convert
    std::cout << "Num{25}" << std::endl;
    std::cout << "Num is: " << num << std::endl;

    //unsigned num2 {-25};    // By default literal 25 is is signed int
                            // In this case compiler throw an error
    
    num = -25;              // In this case we have an overfloww
                            // And reuslt will be 4294967295 - 24
                            // As 0 is also number
    std::cout << "Num = -25 " << std::endl;
    std::cout << "Num2 is: " << num << std::endl;

    std::cout << "Safe type conversion" << std::endl;

    std::cout << "bool -> char -> short -> int -> double -> long double" << std::endl;
    std::cout << "bool -> char -> short -> int -> long -> long long" << std::endl;
    std::cout << "unsigned char -> unsigned short -> unsigned int -> unsigned long" << std::endl;
    std::cout << "float -> double -> long double" << std::endl;
    return 0;
}