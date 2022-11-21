// HARSSHIT YADAV
// 2105891
// Create a class to store an integer array. Overload insertion and extraction operator to input and display the array elements.
#include <iostream>
using namespace std;
class A
{
public:
    int a[5];
    friend istream &operator>>(istream &cin, A &ob);
    friend ostream &operator<<(ostream &cout, A &ob);
};
istream &operator>>(istream &cin, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        cin >> ob.a[i];
    }
    return cin;
}
ostream &operator<<(ostream &cout, A &ob)
{
    for (int i = 0; i < 5; i++)
    {
        cout << ob.a[i] << " ";
    }
    return cout;
}
int main()
{
    A obj;
    cin >> obj;
    cout << obj;
    return 0;
}