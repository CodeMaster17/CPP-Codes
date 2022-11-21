// HARSSHIT YADAV
// 2105891
//   Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class : ‘Regular’ and ‘Part - Time’.The ‘Regular’ class stores DA, HRA and basic salary.The ‘Part - Time’ class stores the number of hours and pay per hour.Calculate the salary of a regular employee and a par - time employee, using virtual function
#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calc() = 0;
    string name;
    int id, salary;
    void input()
    {

        cout << "enter the name : ";
        cin >> name;

        cout << " Enter id : ";
        cin >> id;

        cout << "Enter salary : ";
        cin >> salary;
    }
};

class Regular : public Employee
{
public:
    int da, hra, bs;
    void calc()
    {
        cout << "Enter DA : ";
        cin >> da;
        cout << "Enter HRA : ";
        cin >> hra;
        cout << "Enter BS : ";
        cin >> bs;

        int total = da + hra + bs;
        cout << "Total salary of full time employee is : " << total;
    }
    void input()
    {

        cout << "enter the name : ";
        cin >> name;

        cout << " Enter id : ";
        cin >> id;

        cout << "Enter salary : ";
        cin >> salary;
    }
};
class PartTime : public Employee
{
public:
    int hour, money;
    void calc()
    {
        cout << "Enter hour :";
        cin >> hour;
        cout << "Enter money per hour :";
        cin >> money;
        int tSalary = hour * money;
        cout << "Total salary of a part time employe  is : " << tSalary;
    }
    void display()
    {
        cout << "Name  :" << name << endl;
        cout << "id  :" << id << endl;
        cout << "salary  :" << salary << endl;
    }
};
int main()
{
    cout << " Program has started : " << endl;
    Regular obj;
    obj.input();
    obj.calc();
    PartTime obj2;
    obj2.calc();
    obj2.display();
    return 0;
}