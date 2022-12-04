#include <iostream>
using namespace std;
template <class T>
class myClass
{
public:
    myClass(T c)
    {
        cout << "The value of the number is : " << c << endl;
    }
};
int main()
{
    myClass<int> c(4);
    myClass<double> p(4.4);
}