#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int x){
        a = x;
    }

    // copy constrcutor called
    // compiler allocates a default copy constrcutor to all classes -- it runs when no custom copy constructor is found

    // custom copy constructor 
    Number(Number &obj){
        cout<<"Copy Constructor called"<<endl;
        a = obj.a;
    }

    void Display(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    Number x,y,z(45), cc(z);
    x.Display();
    y.Display();
    z.Display();
    cc.Display(); //copy constrcutor called

    
    cc = z; //copy constrcutor not called because object is already created, if it would have been creating then copy constrcutor would have been called but in this case copy constrcutor has been called

    Number cc2 = z; //copy constrcutor called
    return 0;
}