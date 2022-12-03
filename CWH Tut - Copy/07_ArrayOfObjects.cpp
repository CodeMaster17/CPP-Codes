
// Array of Objects

#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:

    void getData(){
        cout<<"Enter the data :"<<endl;
        cin>>id;
    }
    void display(){
      cout<<"The id of the employee is "<<id<<endl;
    }
};

int main(){

    // creating an array which will contain class onjects

    cout<<"This program is done by using array of objects :"<<endl;
    Employee myCompany[4];
    for(int i = 0; i < 4; i++)
    {
        myCompany[i].getData();
        myCompany[i].display();
    }
}