// WAP to demonstrate multiple catch and catch all.

#include <iostream>
using namespace std;
int main()
{
    int x = 6, y = 8;
    try
    {
        try
        {
            if (x == 6)
                throw(x);
        }
        catch (...)
        {
            printf("x=6");
            if (y == 8)
            {
                throw(y);
            }
        }
    }
    catch (int i)
    {
        printf("\ny=%d", i);
    }
}