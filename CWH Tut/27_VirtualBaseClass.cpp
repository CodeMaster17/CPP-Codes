// HARSSHIT YADAV
// 2105891
//  Virtual Base Class
#include <iostream>
using namespace std;

/*
    student ->test
    student -> sports

    test -> result
    sports -> result
*/

class Student
{
protected:
    int roll;

public:
    void setNumber(int a)
    {
        roll = a;
    }
    void printNum(void)
    {
        cout << "Your roll number is :" << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void printmarks(void)
    {
        cout << "Maths marks :" << maths << endl;
        cout << "Physics marks :" << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float s1)
    {
        score = s1;
    }

    void printScore(void)
    {
        cout << " Score :" << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printScore();
        printmarks();
        printNum();
        cout << "Your total score is :" << total << endl;
    }
};
int main()
{
    Result h;
    h.setMarks(10, 10);
    h.setNumber(18);
    h.setScore(110);
    h.display();
    return 0;
}