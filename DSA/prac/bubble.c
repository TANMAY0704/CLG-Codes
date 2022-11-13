#include <stdio.h>
#include <stdlib.h>
void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
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
    printf("Enter elements of array: ");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    print(a, n);
    sort(a, n);
    print(a, n);

    return 0;
}