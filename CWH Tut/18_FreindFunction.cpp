#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // freind function declared inside the class
    // syntax :
    // freind {{return_type}} {{function_namne(artguments)()}}

    friend Complex sumComplex(Complex o1, Complex o2); // sumComplex is not the member function of the class, but by this syntax it is allowed to access the private data members of this class
    void printNumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

// freind function body defined outside the class
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*
Properties of freind function ;
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called directly by creating the object of that class but can be called/invoked without use of any object

3. Usually contains objects as arguments
4. Can be declared inside public or private secrtion of the class
5.
*/