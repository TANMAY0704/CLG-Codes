#include <stdio.h>
#include <stdlib.h>
void create(int a[10][10], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element %d%d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void spare(int a[10][10], int b[10][3], int m, int n)
{
    int i, j, k = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
    }
    b[0][0] = m;
    b[0][1] = n;
    b[0][2] = k - 1;
}
void print(int a[10][3])
{
    int i;
    for (i = 0; i < a[0][2] + 1; i++)
    {
        printf("%d %d %d \n", a[i][0], a[i][1], a[i][2]);
    }
}

int main()
{
    int a[10][10], b[10][3], m, n;
    printf("Enter the order of the matrix : ");
    scanf("%d%d", &m, &n);
    create(a, m, n);
    spare(a, b, m, n);
    print(b);
       
    return 0;
}