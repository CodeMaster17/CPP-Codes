// HARSHIT YADAV
// 2105891
//
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[20];
    char nameVar[20];
    float cost;
    float countVar;
    ofstream outf("data");
    cout << "Enter item name : ";
    cin >> name;

    cout << "Enter item cost : ";
    cin >> cost;

    outf << name << endl;
    outf << cost << endl;

    ifstream inf("data");
    inf >> nameVar;
    inf >> countVar;

    cout << "\n Item name " << nameVar;
    cout << "\n Item cost " << countVar;

    return 0;
}