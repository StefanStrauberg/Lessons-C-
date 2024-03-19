#include <iostream>

int main()
{
    signed int distance{};

    std::cout << "-= Program is converting from meters to kilometers =-" << std::endl;
    std::cout << "Enter number of meters: ";
    std::cin >> distance;

    signed int kilometers{distance / 1000};
    signed int meters{distance % 1000};

    std::cout << "You have entered: "
              << kilometers
              << " km "
              << meters
              << " m"
              << std::endl;

    return 0;
}