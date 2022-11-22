// HARSHIT YADAV
// 2105891
//  += or -= overloading
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

    void operator+=(int bonusmark)
    {
        mark = mark + bonusmark;
    }

    friend void operator-=(Marks &currObj, int newMark);
};
void operator-=(Marks &currObj, int newMark)
{
    currObj.mark -= newMark;
}
int main()
{
    Marks m1(45);
    m1.display();
    m1 += 20;
    m1.display();
    m1 -= 20;
    m1.display();
    return 0;
}