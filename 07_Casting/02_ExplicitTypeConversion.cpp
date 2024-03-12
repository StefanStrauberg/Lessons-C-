#include <iostream>

int main()
{
    double sum{100.2};
    std::cout << "Sum = " << sum << std::endl;
    unsigned int hours{8};
    std::cout << "Hours = " << hours << std::endl;
    std::cout << "Explicit conversation result of sum/hours to unsigned int" << std::endl;
    unsigned int revenuePerHours{static_cast<unsigned int>(sum / hours)};
    // unsigned int revenuePerHour { (unsigned int)sum/hours}; // result is the same
    std::cout << "Revenue per hour = " << revenuePerHours << std::endl;
    return 0;
}