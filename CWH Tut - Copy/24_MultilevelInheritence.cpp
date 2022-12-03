// HARSSHIT YADAV
// 2105891
// MUltilevel inheritence

/*
    Notes :
        1. If we are inheriting B from A and C from B 
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int);
    void getRoll(void);
};

void Student ::setRoll(int r)
{
    roll = r;
}

void Student ::getRoll()
{
    cout << "The roll number is :" << roll << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float m, float p);
    void getMarks();
};

void Exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam ::getMarks()
{
    cout << "maths : " << maths;
    cout << "maths : " << physics;
}

class Result : public Exam
{
    float per;

public:
    void display()
    {
        cout << "roll is :" << roll << endl;
        cout << "maths marks :" << maths << endl;
        cout << "physics marks :" << physics << endl;
    }
};

int main()
{
    Result harry;
    harry.setRoll(90);
    harry.setMarks(90, 100);
    harry.display();
    return 0;
}