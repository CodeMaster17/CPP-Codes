#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    Employee(int i , string n , float s){
        id = 1;
        name = n;
        salary = s;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(void){
    Employee e1 = Employee(101, "Harshit", 8956);

    Employee e2 = Employee(102, "Yadav", 8216);

    e1.display();
    e2.display();
    return 0;
}