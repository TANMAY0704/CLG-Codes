#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the numbers A and B: ";
    cin >> a >> b;
    c = b;
    b = a;
    a = c;
    cout << "After swapping A and B are " << a << " and " << b ;
    return 0;
}
