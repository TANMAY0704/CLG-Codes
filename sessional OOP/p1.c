#include<iostream>
#include<string>
using namespace std;
class bank_acc
{
    int acc_no[5];
    char name[50];
    float balance[5];
    public:
    bank_acc()
    {
        for(int i=0;i<5;i++)
        balance[i]=100;
    }
    void get_data()
    {    int i;
        for(i=0;i<5;i++)
        {
        cout<<"ENTER DETAILS OF CUSTOMER"<<i+1<<endl;
        cout<<"ENTER NAME:";
        cin>>name[i];
        cout<<"ENTER ACCOUNT NUMBER:";
        cin>>acc_no[i];
        cout<<"ENTER BALANCE:";
        cin>>balance[i];
        }
    }
    void deposit()
    {   int a;
        float amt;
        cout<<"ENTER THE ACCOUNT NUMBER IN WHICH YOU WANT TO DEPOSIT THE MONEY:";
        cin>>a;
        cout<<"ENTER THE AMOUNT YOU WANT TO DEPOSIT:";
        cin>>amt;
        for(int i=0;i<5;i++)
        {
            if(acc_no[i]==a)
            {
                balance[i]= balance[i]+amt;
            }
        }
    }
    void withdraw()
    {
        int b;
        float money;
        cout<<"ENTER THE ACCOUNT NUMBER FROM WHICH YOU WANT TO WITHDRAW MONEY:";
        cin>>b;
        cout<<"ENTER THE AMOUNT YOU WANT TO WITHDRAW:";
        cin>>money;
        for(int j=0;j<5;j++)
        {
            if(acc_no[j]=b)
            {
                balance[j]=balance[j]-money;
            }
        }
    }
    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"DETAILS OF CUSTOMER"<<i+1<<"ARE:"<<endl;
            cout<<name[i]<<endl<<acc_no[i]<<endl<<balance[i]<<endl;
        }
    }
    
};
int main()
{
    bank_acc b;
    b.get_data();
    b.deposit();
    b.withdraw();
    b.display();
    return 0;
}