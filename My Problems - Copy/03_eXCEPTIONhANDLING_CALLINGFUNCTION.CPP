#include <iostream>
using namespace std;
void divide(int x, int y, int z)
{
    if ((x - y) != 0)
    {
        int r = z / (x - y);
        cout << r << endl;
    }
    else
    {
        throw(x - y);
    }
}
int main()
{
    try
    {
        divide(20, 10, 30);
        divide(10, 10, 30);
    }
    catch (int i)
    {
        cout << "invalid input";
    }
}