// HARSSHIT YADAV
// 2105891
//. WAP to overload following operators for class distance, which stores the distance in feet
// and inches.
// a) Binary + to
// -add two objects (D3=D1+D2)
// -Add an object to an integer, where the integer should be added to the
// inches value ( D2=4+D1)
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inches; // making the storage value privateso that we can access

public:
    // function to sotre value of distances
    void readDistance(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    // function to display distance
    void dispDistance(void)
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }

    // add two Distance using + operator overloading
    Distance operator+(Distance &dist1)
    {
        Distance tempD; // to add two distances
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = tempD.inches % 12;
        return tempD;
    }
};

int main()
{
    Distance D1, D2, D3; // creating objects

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;

    // add two distances
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.dispDistance();

    cout << endl;

    return 0;
}