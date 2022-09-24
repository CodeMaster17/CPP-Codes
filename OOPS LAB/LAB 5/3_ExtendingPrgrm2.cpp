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
    int marks[5];

    void Display()
    {
        cout << "*******************dislaying result*********************************" << endl;
        cout << "The name is :" << name << endl;
        cout << "The roll is :" << roll << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "The total marks is :" << marks[i] << endl;
        }
    }
};

class Result : public Student
{
public:
    int totalMarks = 0;
    void MarksCalculation()
    {
        for (int i = 0; i < 5; i++)
        {
            totalMarks = totalMarks + marks[i];
        }
    }
};
int main()
{
    Student test;
    cout << "Enter the name : ";
    cin >> test.name;
    cout << "Enter the roll : ";
    cin >> test.roll;
    for (int i = 0; i < 5; i++)
    {

        cout << "Enter the marks " << i + 1;
        cin >> test.marks[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        test.Display();
    }
    return 0;
}