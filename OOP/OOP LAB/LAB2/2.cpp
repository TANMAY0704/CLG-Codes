#include <iostream>
using namespace std;
int factorial(int a)
{
    int i,f=1;
    if(a>0);
    {
        for(i=1;i<=a;i++)
        {
            f=f*i;
        }
    }
    return(f);
}
int pow(int b,int a)
{
    int p=1,i;    
    for(i=1;i<=a;i++)
    {
        p=p*b;
    }    
    return(p);
}
int main()
{
    int a,n,i,s=0;
    cout<<"enter number";
    cin>>a>>n;
    for(i=0;i<=n;i++)
    {
        s=s+(pow(a,i)/factorial(i));
    }
    cout<<s;
    return 0;
}