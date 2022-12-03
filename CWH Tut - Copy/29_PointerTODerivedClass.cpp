// HARSSHIT YADAV
// 2105891
//  Pointer to derived class
#include <iostream>
using namespace std;
class Base
{
public:
    int varBase;
    void display()
    {
        cout << "Running display function of base class" << endl
             << "The value of varBase is :" << varBase << endl;
    }
};
class Derived : public Base
{
public:
    int varDerived;
    void display()
    {
        cout << "Running display function of derived class" << endl
             << "The value of varDerived is :" << varDerived << endl;
        cout << "The value of varBase is :" << varBase << endl;
    }
};

int main()
{
    Base *pointerBase;         // pointer to base class
    Base objBase;              // object of base class
    Derived objDerived;        // object of Derived class
    pointerBase = &objDerived; // directing the pointer of base class to address of object of derived class
    pointerBase->varBase = 90;
    pointerBase->display(); // display function of base class is called

    Derived *pointerDerived;
    pointerDerived = &objDerived;
    pointerDerived->varBase = 12;
    pointerDerived->varDerived = 1000;
    pointerDerived->display();
    return 0;
}