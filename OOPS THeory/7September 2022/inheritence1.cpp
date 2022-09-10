#include<iostream>
using namespace std;

class Mammal{
    public:
    Mammal(){
        cout<<"Mammals can givee direct birth "<<endl;

    }
};

class wingedAnimal{
    public:
    wingedAnimal(){
        cout <<"Winged animal can flap"<<endl;
    }
};

class Bat: public Mammal, public wingedAnimal{};

int main(){
    Bat b1;
    return 0;
}