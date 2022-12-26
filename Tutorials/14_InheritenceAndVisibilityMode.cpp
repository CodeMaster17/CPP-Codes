// watch video number 37 CWH once again for better understanding
#include<iostream>
using namespace std;

class Employee{
    int a ;
    public:
    int b = 2;
    void display(){
        cout<<"The value of b is "<<b<<endl;
    }
};

/* Syntax for inheriting a class
 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
 {
    class members/methods/etc...
 }
Note:
1. Default visibility mode is  private.
2. Public Visibility Mode : Public members of the base class become the public members of the derived class.
3. Private Visibility Mode : Public members of the base class become the private members of the derived class.
4. Private members of the base class never get inherited.
 */

class Programmmer : Employee{
    public:
    int c=7;
    void Output(){

    cout<<"The value of b is "<<b<<" and the value of c is "<<c<<endl;
    }
};

int main(){
    Employee E1;
    Programmmer P1;
    E1.display();
    P1.Output();
}