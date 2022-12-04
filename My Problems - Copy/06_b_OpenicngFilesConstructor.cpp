// HARSHIT YADAV
// 2105891
//
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "Harshit Yadav";

    // opening files through cconstructor and writing it
    ofstream outName("file.txt");
    outName << st; // writing operation

    // opening files using constructor and reading it
    ifstream inName("file.txt");
    inName >> st; // only first line is read

    getline(inName, st); // now next line is read;
    cout << st;
    return 0;
}