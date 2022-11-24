#include <iostream>
using namespace std;
class bank_acc
{
    int acc_no;
    char Name[50];
    int acc_balance;

public:
    bank_acc()
    {
        acc_balance = 100;
    }
    void getdata()
    {
        cout << "Enter name :";
        cin >> Name;
        cout << "Enter acc no : ";
        cin >> acc_no;

    }
    void display()
    {
        cout << "Name :" << Name << endl;
        cout << "Acc no : " << acc_no << endl;
        cout << "Account Balance : " << acc_balance << endl;
        cout << endl;
    }
    void withdraw(int x)
    {
        if (acc_balance >= 100)
        {
            acc_balance -= x;
        }
    }
    void deposit(int x)
    {
        acc_balance += x;
    }
    int accout()
    {
        return (acc_no);
    }
};
int main()
{
    bank_acc b[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        b[i].getdata();
    }
    for (i = 0; i < 5; i++)
    {
        b[i].display();
    }
    cout << "Enter account to deposit : ";
    cin >> j;
    for (i = 0; i < 5; i++)
    {
        if (j == b[i].accout())
        {
            cout << "Enter amount to depost : ";
            cin >> k;
            b[i].deposit(k);
        }
    }
    cout << "Enter account to withdraw :  ";
    cin >> j;
    for (i = 0; i < 5; i++)
    {
        if (j == b[i].accout())
        {
            cout << "Enter amount to withdraw : ";
            cin >> k;
            b[i].withdraw(k);
        }
    }
    for (i = 0; i < 5; i++)
    {
        b[i].display();
    }
}