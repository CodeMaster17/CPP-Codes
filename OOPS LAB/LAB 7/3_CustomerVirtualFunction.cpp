// HARSSHIT YADAV
// 2105891
//  Create a class which stores account number, customer name and balance. Derive twoclasses from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’class storesminimum balance. The ‘Current’ class stores the over-due amount. Includememberfunctions in the appropriate class for-deposit money-withdraw [For saving account minimum balance should be checked.][For current account overdue amount should be calculated.]-display balanceDisplay data from each class using virtual function.
#include <iostream>
using namespace std;

class Account
{
public:
    virtual void display() = 0;
};

class Savings : public Account
{
    int deposit, withdraw, balance;
    void moneyInfo()
    {
        cout << "enter deposit money :" << endl;
        cin >> deposit;

        cout << "Enter money withdrawl : " << endl;
        cin >> withdraw;

        balance = deposit - withdraw;
    }
    void validityChk()
    {
        if (balance > 100)
        {
            cout << "enough balance present " << endl;
        }
        else
        {
            cout << "enough balance not present " << endl;
        }
    }
    void displaY()
    {
        cout << "Balance is : " << balance << endl;
    }
};
class Current : public Account
{
public:
    int overDueAmt, loan, paid;

public:
    void input()
    {
        cout << "enter the loan amount : " << endl;
        cin >> loan;
        cout << "Enter paid amount : " << endl;
        cin >> paid;
    }
    void calc()
    {
        overDueAmt = loan - paid;
    }
    void displaY()
    {
        cout << "Balance is : " << overDueAmt << endl;
    }
};
int main()
{
    return 0;
}