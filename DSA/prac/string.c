#include <stdio.h>
#include <stdlib.h>
void vowels(char a[])
{
    int i, j, k, l, m, n;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            for (j = i; a[j] != '\0'; j++)
            {
                a[j] = a[j + 1];
            }
        }
    }
    printf("\n   The string without vowels is : %s", a);
}
int main()
{   
    char a[100];

    printf("Enter a string: ");
    gets(a);
    printf("You entered: %s", a);
    vowels(a);

    return 0;
}