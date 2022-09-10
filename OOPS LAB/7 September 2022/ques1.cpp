// Harshit Yadav
// 2105891
#include <iostream>
using namespace std;

class complexNum
{
    int a, b;

public:
    complexNum(int x, int y)
    {
        a = x;
        b = y;
    }

    complexNum()
    {
        a = 10;
        b = 20;
    }

    void display()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }

    ~complexNum()
    {
        cout << "distructor is invoked" << endl;
    }
};

int main()
{
    // parametrized constructors
    complexNum p(4, 6); 
    complexNum q;       // default constructor
    p.display();
    q.display();
    return 0;
}