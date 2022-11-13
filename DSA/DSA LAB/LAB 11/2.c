#include <stdio.h>
#include <stdlib.h>
void insertionsort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int n, j;
    printf("Enter lenght of array: ");
    scanf("%d", &n);
    int a[n];
    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    print(a, n);
    insertionsort(a, n);
    print(a, n);
    return 0;
}