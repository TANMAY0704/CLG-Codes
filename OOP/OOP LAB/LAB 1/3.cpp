#include <iostream>
using namespace std;
int main()
{
    int i = 1,  fact=1 , n;
    cout << "Enter the number : " ;
    cin >> n ;
    for ( i; i <=n; i++)
    {
        fact = fact*i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
    return 0;
}
