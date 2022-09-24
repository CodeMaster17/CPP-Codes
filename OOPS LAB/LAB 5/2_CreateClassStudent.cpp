// HARSSHIT YADAV
// 2105891
//  Create a class student which stores name, roll number and age of a student. Derive a class
// test from student class, which stores marks in 5 subjects.Input and display the details a student
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int age;

    void Display()
    {
        cout << "*******************dislaying result*********************************" << endl;
        cout << "The name is :" << name << endl;
        cout << "The roll is :" << roll << endl;
        cout << "The age is :" << age << endl;
    }
};
int main()
{
    Student test;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter the name : ";
        cin >> test.name;
        cout << "Enter the roll : ";
        cin >> test.roll;
        cout << "Enter the age : ";
        cin >> test.age;
    }
    for (int i = 1; i <= 5; i++)
    {
        test.Display();
    }
    return 0;
}