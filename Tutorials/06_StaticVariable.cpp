// static members can only access static members of the class

#include<iostream>
using namespace std;

class Employee{
    int id;

    // default value of a static variable is 0
    static int count;
    

    public:
         void getData(){
            cout<<"Enter the id of the employee : "<<endl;
            cin>>id;
            count++;
         };
         void DisplayData(){
            cout<<"The id of " <<count<<" employee is "<<id<<endl;
         };

         static void CountIncrement(){
            cout<<"The value of the count is :"<<count<<endl;
         }
};

int Employee::count;
int main(){
    Employee info;
    info.getData();
    info.DisplayData();
    Employee::CountIncrement();

    info.getData();
    info.DisplayData();
    Employee::CountIncrement();

    info.getData();
    info.DisplayData();
    Employee::CountIncrement();
    
    info.getData();
    info.DisplayData();
    Employee::CountIncrement();
    return 0;
}