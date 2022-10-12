// HARSSHIT YADAV
// 2105891
// Extend the program ii. of inheritance to include a class sports, which stores the marks in
// sports activity.Derive the result class from the classes ‘test’ and ‘sports’.Create objects using parameterized constructors.Calculate the total marks and percentage of a student.
#include <iostream>
using namespace std;

// Base class
class A
{
public:
    A()
    {
        cout << "Base class A constructor \n";
    }
};

// extended part
class sports
{
public:
    void marks(int m1, int m2, int m3, int m4, int m5)
    {
        int m1 = m1;
        int m2 = m2;
        int m3 = m3;
        int m4 = m4;
        int m5 = m5;
    }
};

class calc : public sports
{
public:
    void calculation()
    {
        int total = m1 + m2 + m3 + m4 + m5;
    }
};

// Derived class B
class B : public A
{
public:
    B()
    {
        cout << "Class B constructor, 1st derived class \n";
    }
};

// Derived class C
class C : public B
{
public:
    C()
    {
        cout << "Class C constructor, 2nd derived class \n";
    }
};

// Driver code
int main()
{
    C obj;
    return 0;
}
