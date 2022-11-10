// WAP to throw and handle’ array out of bound’ exceptions
#include <iostream>
using namespace std;
#define N 5

int main()
{
    int a[N], l;
    cout << "enter length of array ";
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
    }
    catch (int j)
    {
        cout << "array out of bounds";
    }
}