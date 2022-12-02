// HARSHIT YADAV
// 2105891
//  Stream overloading and extraction operator
#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "noname";
        age = 0;
    }
    friend ostream &operator<<(ostream &output, Person &p);
    friend istream &operator>>(istream &input, Person &p);
};
ostream &operator<<(ostream &output, Person &p)
{
    output << "Harshit Yadav " << endl;
    output << "my name is : " << p.name << "and my age is : " << p.age << endl;
    return output;
}

istream &operator>>(istream &input, Person &p)
{
    input >> p.name >> p.age;
}
int main()
{
    cout << "enter the name and age " << endl;
    Person yadav;
    cin >> yadav;
    cout << yadav;
    return 0;
}