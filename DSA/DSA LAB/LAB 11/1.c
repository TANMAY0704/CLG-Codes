#include <stdio.h>
#include <stdlib.h>
void ssort(int a[], int n)
{
    int i, j, max, p;
    for (i = n - 1; i > 0; i--)
    {
        max = a[0];
        p = 0;
        for (j = 1; j <= i; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                p = j;
            }
        }
        a[p] = a[i];
        a[i] = max;
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
    ssort(a, n);
    print(a, n);
    return 0;
}