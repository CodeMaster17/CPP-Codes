#include<iostream>
using namespace std;

class Items{
    int itemPrice[100];
    int itemId[100];
    int counter;

    public:
        void setPrice(void);
        void display(void);
        void setCounter(){counter = 0;}
};

void Items :: setPrice(){
    cout<<"Enter the id of item "<<counter+1<<" : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of item "<<counter+1<<" : "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Items:: display(){
    for(int i = 0; i < counter; i++)
    {
        cout<<"Item id "<<itemId[i]<<" has price "<<itemPrice[i]<<endl;
    }
}

int main(){
    Items shop;
    shop.setCounter();
    shop.setPrice();
    shop.display();
    return 0 ;
}