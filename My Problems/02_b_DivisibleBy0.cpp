#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Tnter the numbers : " << endl;
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            cout << a / b;
        }
        else
            throw(b);
    }
    catch (int j)
    {

        cout << "Divisibility by zero - not permitted";
    }
}