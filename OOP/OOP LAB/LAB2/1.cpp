#include <iostream>
using namespace std;
int check(int a[],int b,int c)
{
    int f=0,i;
    for(i=0;i<c;i++)
    {
        if(a[i]==b)
            f=1;
    }
    if(f==1)
        cout<<"it is in the array";
    else 
        cout<<"it is not";
    return 0;
}
int main()
{
    int a[20],b,c,i;
    cout<<"enter lenghth of array";
    cin>>c;
    cout<<"enter arrray";
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to check for";
    cin>>b;
    check(a,b,c);
     
    return 0; 
}   
