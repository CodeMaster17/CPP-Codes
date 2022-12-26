// HARSSHIT YADAV
// 2105891
// Enum
#include <iostream>
using namespace std;
int main()
{
    enum Meals
    {
        breakfast,
        lunch,
        dinner
    };

    Meals m1 = breakfast;
    cout << breakfast << endl; // 0
    cout << lunch << endl;     // 1
    cout << dinner << endl;    // 2
    cout << breakfast << m1;   // 0
    return 0;
}