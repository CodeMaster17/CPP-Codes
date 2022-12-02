// HARSHIT YADAV
// 2105891
//  overload increment and decrement operator in prefix form
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

    void operator++() // not passing any value because it is a unary operator, and when we will call this operator one object will be passed implicitly
    // it does not return any value
    {
        mark += 1;
    }

    friend void operator--(Marks &m);
};
void operator--(Marks &m)
{
    m.mark -= 1;
}
int main()
{
    Marks m(20);
    m.display();

    ++m;
    m.display();

    --m;
    m.display();

    return 0;
}