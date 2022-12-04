#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("myFile.txt", ios::out);
    if (!myFile)
    {
        cout << "file not created";
    }
    else
    {
        cout << "file created successfully!";
        myFile << "KIIT";
        myFile.close();
    }
    return 0;
}