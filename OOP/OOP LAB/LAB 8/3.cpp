#include <iostream>
using namespace std;
class Account
{
protected:
    int acc_no;
    char name[20];
    float balance;
public:
    void getdata()
    {
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter balance: ";
        cin >> balance;
    }
    virtual void deposit()
    {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance += amt;
    }
    virtual void withdraw()
    {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        balance -= amt;
    }
    virtual void display()
    {
        cout << "Account number: " << acc_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
class Savings : public Account
{
    float min_bal;

public:
    void getdata()
    {
        Account::getdata();
        cout << "Enter minimum balance: ";
        cin >> min_bal;
    }
    void deposit()
    {
        Account::deposit();
    }
    void withdraw()
    {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if (balance - amt < min_bal)
            cout << "Insufficient balance" << endl;
        else
            balance -= amt;
    }
    void display()
    {
        Account::display();
        cout << "Minimum balance: " << min_bal << endl;
    }
};
class Current : public Account
{
    float over_due;
public:
    void getdata()
    {
        Account::getdata();
        cout << "Enter over due amount: ";
        cin >> over_due;
    }
    void deposit()
    {
        Account::deposit();
    }
    void withdraw()
    {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if (balance - amt < over_due)
            cout << "Insufficient balance" << endl;
        else
            balance -= amt;
    }
    void display()
    {
        Account::display();
        cout << "Over due amount: " << over_due << endl;
    }
};
int main()
{
    Account *a[2];
    Savings s;
    Current c;
    a[0] = &s;
    a[1] = &c;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details of account " << i + 1 << endl;
        a[i]->getdata();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Details of account " << i + 1 << endl;
        a[i]->display();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details of account " << i + 1 << endl;
        a[i]->deposit();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Details of account " << i + 1 << endl;
        a[i]->display();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details of account " << i + 1 << endl;
        a[i]->withdraw();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Details of account " << i + 1 << endl;
        a[i]->display();
    }
}