#include <iostream>

using std::cout;
using std::endl;

using ullong = unsigned long long; // the same as below
typedef unsigned int ulint;

int main()
{
    ullong myUlong = 9'223'372'036'854'775'807;
    ulint myUint = 4'294'967'295;

    cout << "myUlong: " << myUlong << endl;
    cout << "myUint: " << myUint << endl;

    return 0;
}