#include <iostream>

using namespace std;
class time1
{
    int Hours;
    int MInutes;

public:
    time1(int hour, int min = 0)
    {
        Hours = hour;
        MInutes = min;
    }
    void printtime()
    {
        cout << "the value of hour  is " << Hours << " and minute is " << MInutes << endl;
    }
};

int main()
{
    time1 t1(21, 19);
    t1.printtime();

    time1 t2(12);
    t2.printtime();

    return 0;
}