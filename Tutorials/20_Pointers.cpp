// HARSSHIT YADAV
// 2105891
// Pointers in C++

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    // & = address of operatorr
    // * = derferencing operator
    int *b = &a;
    cout << b << endl;
    cout << &a << endl;
    cout << "Dereference operator :" << *b << endl;

    // pointer to pointer variable
    // a variable which stores address of another variable
    int **c = &b;
    cout << "Address of b is " << c << endl;
    cout << "value at *c  is " << *c << endl;
    cout << "value at **c  is " << **c << endl;
    return 0;
}