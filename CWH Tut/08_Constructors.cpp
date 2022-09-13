#include<iostream>
using namespace std;

class Complex{
    int a , b;
    public:
        Complex(void);
        void PrintNum(void){
            cout<<endl<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex::Complex(){
    a=3;
    b=4;
}
int main(){
    Complex bj;
    bj.PrintNum();
}
