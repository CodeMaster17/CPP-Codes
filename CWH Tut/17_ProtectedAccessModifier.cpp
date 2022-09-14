#include <iostream>
using namespace std;

class Base
{
protected: // a data member which is like a private data member but can be inherited
    int a;

private:
    int b;
};

class Derived : Base
{
};
int main()
{
    return 0;
}