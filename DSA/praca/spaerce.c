//spare matrix
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, m, n, p, q, k, sum = 0;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p)
    {
        printf("The matrices cannot be multiplied with each other. ");
        exit(0);
    }
    printf("Enter the elements of first matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < p; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    printf("The product of the matrices is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}