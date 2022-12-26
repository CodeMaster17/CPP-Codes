// HARSSHIT YADAV
// 2105891
// Ambiguity resolution in Inheritence C++

#include <iostream>
using namespace std;

class Base1
{
public:
    void Greet()
    {
        cout << "How are you" << endl;
    }
};
class Base2
{
public:
    void Greet()
    {
        cout << "Kaise ho?" << endl;
    }
};
class DerivedClass : public Base1, public Base2
{
    int a;

public:
    void Greet()
    {
        Base2::Greet(); // telling the function that use function of class base 2
    }
};

int main()
{

    // ambiguity 1
    Base1 b1obj;
    Base2 b2obj;
    b1obj.Greet();
    b2obj.Greet();
    DerivedClass d;
    d.Greet(); // error : derived greet class is ambigous

    // ambiguity 2
    /* when base class and derived class both have funcction with same name then the function of the derived class ovverides the function( with same name in base class) */
    return 0;
}