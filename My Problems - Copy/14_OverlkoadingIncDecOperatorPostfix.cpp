// HARSHIT YADAV
// 2105891
//  overload increment and decrement operator in postfix form
#include <iostream>
using namespace std;

class Marks
{
    int mark;

public:
    Marks()
    {
        mark = 0;
    }
    Marks(int m)
    {
        mark = m;
    }
    void display()
    {
        cout << "Marks : " << mark << endl;
    }

    // using increment operator overloading as a friend function
    Marks operator++(int) // not passing any value because it is a unary operator, and when we will call this operator one object will be passed implicitly
    // it does not return any value
    // int in argument shows it is used in postfix form
    {
        Marks duplicate(*this);
        mark += 1;
        return duplicate;
    }

    // using decrement operator overloading as a friend function
    friend Marks operator--(Marks &m, int);
};

Marks operator--(Marks &m, int)
{
    Marks duplicate(m);
    m.mark -= 1;
    return duplicate;
}

int main()
{
    Marks m(20);
    m.display();

    (m++).display();
    m.display();
    return 0;
}