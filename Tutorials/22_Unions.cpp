// HARSSHIT YADAV
// 2105891
//  Unions
#include <iostream>
using namespace std;

// structures
typedef struct Harshit
{
    int salary;   // 4 bytes
    char section; // 4 bytes
    int school;   // 4 bytes

    // total 12 bytes used
} ep;

// Unions are like structures but they provide better memory management
union Hero
{
    // we can set and use only one variable of the union at a time
    int car;      // 4 bytes
    char bunglow; // 1 bytes
    int bike;     // 4 bytes

    // toal size used depends on variable used
};

int main()
{
    union Hero h1;
    h1.car = 3;
    h1.bunglow = '10';
    cout << "value of car is :" << h1.car << endl;
    cout << "value of bunglow is :" << h1.bunglow << endl; // it throws a garbage value coz we tried to use 2 variables of union
    return 0;
}