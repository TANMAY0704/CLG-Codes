#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = a[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = a[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
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
    printf("Enter array: ");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    print(a, n);
    mergesort(a, 0, n - 1);
    print(a, n);
    return 0;
}