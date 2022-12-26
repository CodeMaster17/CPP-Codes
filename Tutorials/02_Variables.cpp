#include<iostream>
using namespace std;

// global variales
int global = 9;
void sumFunction(){
    global = 4;
    cout<<"\nThis is value of global in sumFunction";
}

int main(){
    int sum = 6;
    float b = 1000.00;
    bool answer = "true";
    cout <<"hello world "<< sum <<" and this is very small  number w.r.t "<<b<<" and this is "<<answer ;
    // here true is treated as 1 while printing

    cout << "\nTrying to print a global variable "<<global;
    sumFunction();

    cout << "\nTrying to print a global variable after changing the value by calling a function "<<global;
    
    // tryin to print value after changing the value in this function
    global = 88;
    cout << "\nTrying to print a global variable after changing the value in this function: "<<global;

    return 0;
}