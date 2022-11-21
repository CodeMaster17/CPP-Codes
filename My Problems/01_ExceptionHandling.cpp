// HARSSHIT YADAV
// 2105891
//  exception handling
#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw 6;
    }
    catch (int a)
    {
        cout << "An exception occured" << endl;
        cout << "Error number is :" << a;
    }
    return 0;
}