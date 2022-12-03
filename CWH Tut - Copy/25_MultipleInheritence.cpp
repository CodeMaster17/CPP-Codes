// HARSSHIT YADAV
// 2105891
//  Multiple Inheritence

#include <iostream>
using namespace std;

/*
Syntax for multiple inheritence
    class {{Derived Class}} : {{visibility mode bse 1}} , {{visibility mode base 2}}
    {
        {{Class body}}
    }
 */
class Base1
{
protected:
    int basevar1;

public:
    void setBase1(int a)
    {
        basevar1 = a;
    }
};
class Base2
{
protected:
    int basevar2;

public:
    void setBase2(int a)
    {
        basevar2 = a;
    }
};

class DerivedClass : public Base1, public Base2
{
public:
    void Show()
    {
        cout << "The value of Base 1 :" << basevar1;
        cout << "The value of Base 2 :" << basevar2;
    }
};
int main()
{
    DerivedClass d1;
    d1.setBase1(3);
    d1.setBase2(4);
    d1.Show();
    return 0;
}