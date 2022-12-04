// HARSSHIT YADAV
// 2105891
// Divisibility
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (b != 0)
            cout << a / b;

        else
            throw(b);
    }
    catch (int j)
    {
        cout << "Exception caught :divided by zero" << endl;
    }
    return 0;
}