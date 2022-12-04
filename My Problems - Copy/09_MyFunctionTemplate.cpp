#include <iostream>
using namespace std;
template <class T>
void func(T c)
{
    int a = c;
    cout << "You entered : " << a << endl;
}

int main()
{
    func(2);
    func(80);
    return 0;
}