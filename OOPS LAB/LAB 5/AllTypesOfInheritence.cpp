// HARSSHIT YADAV
// 2105891
// WAP to display all types of inheritence
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    int b;
    Number()
    {
        b = 4;
    }
    void Display(int num);
};

void Number ::Display(int num)
{
    cout << "The value of the number passed is :" << num << endl;
}
// single level inheritence
class DerivedNumber : public Number
{
public:
    int c;
};

// multi level inheritence
class DerivedNumberPart2 : public DerivedNumber
{
public:
    int d;
};
int main()
{
    Number num;
    num.b = 9;
    num.Display(num.b);
    DerivedNumber numCopied;

    numCopied.c = 3;
    numCopied.Display(numCopied.c);

    DerivedNumberPart2 numCopiedPart2;
    numCopiedPart2.c = 10;
    cout << "Accesing c through third inherited class : " << endl;
    numCopiedPart2.Display(numCopiedPart2.c);
    return 0;
}