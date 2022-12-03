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
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int p)
    {
        a = p;
        b = 0;
    }
};

int main()
{
    Complex bj(4, 7);
    bj.PrintNum();

    Complex obj2(3);
    obj2.PrintNum();
}
