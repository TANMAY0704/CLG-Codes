#include <iostream>
using namespace std;
int main()
{
    int i=1 , n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Table of " << n << "is :\n";
    for ( i ; i <=10; i++)
    {
        cout << n << " X " << i << " = "<< n*i <<endl; ;
    }
    return 0;
}
