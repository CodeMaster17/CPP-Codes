#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("file.txt", ios::in);
    if (!file)
    {
        cout << "No such file";
    }
    else
    {
        char ch;
        while (1)
        {
            file >> ch;
            if (file.eof())
                break;

            cout << ch;
        }
    }
    file.close();
    return 0;
}