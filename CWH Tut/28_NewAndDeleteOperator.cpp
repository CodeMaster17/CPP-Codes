// HARSSHIT YADAV
// 2105891
// New and Delete Operator
#include <iostream>
using namespace std;
int main()
{
    // basic example
    int a = 9;
    int *ptr = &a;
    cout << "The value of a is " << *ptr << endl;

    // new keyword
    // dynamically intializing a variable

    // new keyword is used to dynamically allocate memory to a variable
    int *p = new int(230);
    cout << "The value of a is " << *p;

    int *arr = new int[3];
    arr[0] = 1430;
    *(arr + 1) = 1032;
    arr[2] = 1023;

    // delete operator
    // used to delete the dynamically allocated memory
    delete[] arr;
    // when we will try to print the values at indexes, it will print garbage value

    return 0;
}