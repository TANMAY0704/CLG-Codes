#include <iostream>
using namespace std;
int check(int b)
{
    if(b%2==0)
        cout<<" even\n";
    else 
        cout<<" odd\n";
}
int main()
{
int a[20],c,i;
    cout<<"enter lenghth of array";
    cin>>c;
    cout<<"enter arrray";
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<c;i++)
    {
        cout<<a[i];
        check(a[i]);
    }
    
    

}