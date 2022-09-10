#include <iostream>
using namespace std;

class Employee
{
private:
    // only member functions can access these variables

    int address, batch;
    long phone;

public:
    // these variables can directly be accessed
    string name;
    int salary;

    void getData(int address1, int batch1, long phone1);

    void printData()
    {
        cout << "Name of the employee :" << name << endl;
        cout << "salary of the employee :" << salary << endl;
        cout << "Batch of the employee :" << batch << endl;
        cout << "Phone of the employee :" << phone << endl;
        cout << "Address of the employee :" << address << endl;
    }
};

void Employee ::getData(int address1, int batch1, long phone1)
{
    address = address1;
    batch = batch1;
    phone = phone1;
}

int main()
{
    Employee Harshit;
    Harshit.name = "Harshit";
    Harshit.salary = 100000;
    Harshit.getData(2323, 112, 3232);
    Harshit.printData();
    return 0;
}