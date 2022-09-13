#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void PrintNum(void)
    {
        cout << endl
             << "The complex number is " << a << "+" << b << "i" << endl;
    }
    // parametrized constructor1
    Complex(int x, int y=9)
    {
        a = x;
        b = y;
    }
};

int main()
{
    Complex bj(4, 7);
    bj.PrintNum();

    Complex obj2(3);
    obj2.PrintNum();
}
