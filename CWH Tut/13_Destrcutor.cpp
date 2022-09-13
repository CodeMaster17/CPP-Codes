#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        cout<<"This is the time when constructor is called"<<endl;
        a = 3;
    }
    ~Number(){
        cout<<"This is the time when destructor is called"<<endl;
    }
    void Display(){
        cout<<"Th value of a is "<<a<<endl;
    }
};
int main(){
    Number n1;
    n1.Display();
}