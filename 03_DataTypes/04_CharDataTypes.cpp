#include <iostream>

int main()
{
    std::cout << "C++ has four types for storing Unicode characters: " << std::endl;
    std::cout << "wchar_t, wchar8_t, wchar16_t, wchar32_t" << std::endl;
    std::cout << "whcar - means wide char" << std::endl;

    wchar_t a1 {L'A'};
    wchar_t a2 {L'\x41'};

    std::cout << "cout:\twchar_t a1: " << a1 << std::endl;
    std::wcout << "wcout:\twchar_t a1: " << a1 << std::endl;
    std::cout << "sizeof(wchar_t) = " << sizeof(a1) << std::endl;

    return 0;
}