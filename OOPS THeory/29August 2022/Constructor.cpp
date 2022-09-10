#include<iostream>
using namespace std;

class Employee{
    public :
    Employee(){
        int a;
        cout<<"Default constructor invoked"<<endl;
        cin>>"Enter the number">>a;
    }
};
int main(void){
    Employee e1;
    Employee e2;
    return 0;
}