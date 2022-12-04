// HARSSHIT YADAV
// 2105891
//  Function template
#include <iostream>
using namespace std;
template <class T>
void square(T x)
{
    cout << "square =" << x * x;
}

int main()
{
    square(3);
    return 0;
}