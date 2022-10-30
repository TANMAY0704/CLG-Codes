#include <iostream>
using namespace std;
class Account
{
protected:
    int acc_no;
    char name[20];
    float balance;
public:
    void get_data()
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
    virtual void w()
    {
        float amt;
        cout << "Enter amount to w: ";
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
    void get_data()
    {
        Account::get_data();
        cout << "Enter minimum balance: ";
        cin >> min_bal;
    }
    void deposit()
    {
        Account::deposit();
    }
    void w()
    {
        float amt;
        cout << "Enter amount to w: ";
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
    void get_data()
    {
        Account::get_data();
        cout << "Enter over due amount: ";
        cin >> over_due;
    }
    void deposit()
    {
        Account::deposit();
    }
    void w()
    {
        float amt;
        cout << "Enter amount to w: ";
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
        a[i]->get_data();
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
        a[i]->w();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Details of account " << i + 1 << endl;
        a[i]->display();
    }
}