// HARSSHIT YADAV
// 2105891
// operator overloading
#include <iostream>
using namespace std;

class Marks
{
    int intMarks;
    int extMarks;

public:
    Marks()
    {
        intMarks = 0;
        extMarks = 0;
    }
    Marks(int im, int em)
    {
        intMarks = im;
        extMarks = em;
    }
    void display()
    {
        cout << "Internal Marks : " << intMarks << endl;
        cout << "External Marks : " << extMarks << endl;
    }
    Marks operator-(Marks m);
};

Marks Marks ::operator-(Marks m)
{
    Marks temp;
    temp.intMarks = intMarks - m.intMarks;
    temp.extMarks = extMarks - m.extMarks;
    return temp;
}

int main()
{
    Marks m1(10, 20), m2(30, 40);
    // Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;
    // m3.display();
    m4.display();
    return 0;
}