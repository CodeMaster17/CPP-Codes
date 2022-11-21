#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_info;
    my_info.open("2105886.txt", ios::out);

    if (!my_info)
    {
        cout << "File not created";
    }
    else
    {
        cout << "File created successfully\n";
        my_info << "Name: Harshit Yadav\n";
        my_info << "Roll no.: 2105891\n";
        my_info << "Section: CSE28";
        my_info.close();
    }

    fstream my_file;
    my_file.open("2105886.txt", ios::in);
    if (!my_file)
    {
        cout << "No such file";
    }
    else
    {
        char ch;
        while (1)
        {
            my_file >> ch;
            if (my_file.eof())
                break;
            cout << ch;
        }
    }
    my_file.close();
    return 0;
}