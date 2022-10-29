#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, row, col, a[50][50];
    cout << "Enter the row and column of the matrix :\n";
    cin >> row >> col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nThe Matrix is :\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << left << setw(4) << a[i][j];
        }
        printf("\n");
    }
    cout << "\nThe Lower Trinagular Matrix is\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i >= j)
                cout << left << setw(4) << a[i][j];
            else
                cout << left << setw(4) << 0;
        }
        printf("\n");
    }
    cout << "\nThe Upper Trinagular Matrix is\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i <= j)
                cout << left << setw(4) << a[i][j];
            else
                cout << left << setw(4) << 0;
        }
        printf("\n");
    }
}