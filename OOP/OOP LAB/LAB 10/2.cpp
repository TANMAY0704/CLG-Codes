// WAP to throw and handle’ array out of bound’ exceptions
#include <iostream>
using namespace std;
#define N 5

int main()
{
    int a[N], l;
    cout << "Enter length of array :  ";
    cin >> l;
    try
    {

        for (int i = 0; i < l; i++)
        {
            if (i >= N)
            {
                throw i;
            }
            cin >> a[i];
        }
        cout << "The Array is ";
        for (int i = 0; i < l; i++)
        {

            cout << a[i] << " ";
        }
    }
    catch (int j)
    {
        cout << "Array out of bounds";
    }
}