#include<iostream>
using namespace std;

class binary{
    string s;
    
    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter the binary number : ";
    cin>>s;
}

void binary:: chk_bin(void){
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
           
            break;
        }
        else{
            count = 1;
        }
        
    }
    if(count==1)
    {
        cout<<"Correct binary format";
    }
}

void binary :: ones(void){
    for(int i = 0 ; i<s.length(); i++)
    {
     if(s.at(i) == '0'){
        s.at(i) = '1';
     }   
     else if(s.at(i) == '1'){
        s.at(i) = '0';
     } 
     else{
        cout<<"Incorrect binary format";
        exit(0);
     }  
     
    }
}
void binary :: display(void){
    for(int i = 0 ; i<s.length(); i++)
    {
     cout<<s.at(i);
     
    }
}


int main(){
    binary b;
    b.read();
    b.chk_bin();
    cout<<"1s complement of the binary number is :"<<endl;
    b.ones();
    b.display();
    return 0;
}