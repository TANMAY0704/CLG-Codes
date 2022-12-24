#include<iostream>
#include<string>
using namespace std;
class bank_account
{
    int account_number;
    string name;
    float balance_amount;
    public:
    void get_data();
    void intialize()
    {
        balance_amount=100;
    }
    void deposit_amount(int);
    void withdraw(int);
    void display();
};
void bank_account::get_data()
{
    cout<<"Enter Account Number :";
    cin>>account_number;
    cout<<"Enter Name :";
    cin>>name;
    cout<<"Enter Balance amount :";
    cin>>balance_amount;
}
void bank_account::deposit_amount(int a)
{
    float d;
    if(a==account_number)
    {
    cout<<"Enter the amount to be depositted :";
    cin>>d;
    balance_amount+=d;
    }   
}
void bank_account::withdraw(int a)
{
    float amt;
    if(a==account_number){
    cout<<"Enter the amount to be withdrwal :";
    cin>>amt;
    if(balance_amount<100){
        cout<<"Insufficient balance amount\n";
        return ;
    }
    else
        balance_amount-=amt;
    }
}
void bank_account::display(){
    cout<<"Account Number :"<<account_number<<"\nName :"<<name<<"\nBalnce Amount :"<<balance_amount<<endl;
}
int main()
{
    int i, a,b;
    bank_account ob[5];
    for(i=0;i<5;i++){
        ob[i].get_data();
    }
    for(i=0;i<5;i++){
        ob[i].intialize();
    }
    cout<<"ENTER THE ACCOUNT IN WHICH YOU WANT TO DEPOSIT MONEY :";
    cin>>a;
    for(i=0;i<5;i++){
        ob[i].deposit_amount(a);
    }
    cout<<"ENTER ACCOUNT FROM WHICH YOU WANT TO WITHDRAW THE MONEY:"<<endl;
    cin>>b;
    for(i=0;i<5;i++)
    {
        ob[i].withdraw(b);
    }
    for(i=0;i<5;i++)
    {
        ob[i].display();
    }
    return 0;
}
