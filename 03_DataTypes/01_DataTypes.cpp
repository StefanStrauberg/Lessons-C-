#include <iostream>

int main()
{
    signed char _signedChar{-64};
    char _char{126};
    unsigned char _unsignedChar{64};
    short _short{-88};
    unsigned short _unsignedShort{88};
    int _int{-1024};
    unsigned int _unsigendInt{1024};
    long _long{-2048};
    unsigned long _unsignedLong{2048};
    long long _longLong{-4096};
    unsigned long long _unsignedLongLong{4096};
    std::cout << "Signed Char = " << _signedChar << std::endl;
    std::cout << "Char = " << _char << std::endl;
    std::cout << "Unsigned Char = " << _unsignedChar << std::endl;
    std::cout << "Short = " << _short << std::endl;
    std::cout << "Unsigned Short = " << _unsignedShort << std::endl;
    std::cout << "Int = " << _int << std::endl;
    std::cout << "Unsigend Int = " << _unsigendInt << std::endl;
    std::cout << "Long = " << _long << std::endl;
    std::cout << "Unsigend Long = " << _unsignedLong << std::endl;
    std::cout << "Long Long = " << _longLong << std::endl;
    std::cout << "Unsigend Long Long = " << _unsignedLongLong << std::endl;

    return 0;
}