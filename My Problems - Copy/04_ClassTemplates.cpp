#include <iostream>
using namespace std;

template <class T>
class data
{
public:
    data(T c)
    {
        cout << c << endl;
    }
};

int main()
{
    data<char> c('A');
    data<int> i(100);
    data<string> p("we are hero");
}