#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void PrintNum(void)
    {
        cout << endl
             << "The complex number is " << a << "+" << b << "i" << endl;
    }
};


// parametrized constructor1
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // parametrized constructor

    // implicit call
    Complex bj(4,7);

    // explicit call
    Complex b = Complex(8,9);

    bj.PrintNum();
    b.PrintNum();
}
