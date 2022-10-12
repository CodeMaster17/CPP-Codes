// HARSSHIT YADAV
// 2105891
// WAP to demonstrate the order of call of constructors and destructors in case of multilevel inheritance.

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
