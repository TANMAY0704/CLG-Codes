#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f;
    b = fork();
    if (b == 0)
    {
        printf("B is child of A and has pid %d and parent pid %d \n", getpid(), getppid());
    }
    else
    {
        c = fork();
        if (c == 0)
        {
            printf("C is child of A and has pid %d and parent pid %d \n", getpid(), getppid());
            d = fork();
            if (d == 0)
            {
                printf("D is child of C and has pid %d and parent pid %d \n", getpid(), getppid());
            }
            else
            {
                e = fork();
                if (e == 0)
                {
                    printf("E is child of C and has pid %d and parent pid %d \n", getpid(), getppid());
                }
            }
        }
        else
        {
            f = fork();
            if (f == 0)
            {
                printf("F is child of A and has pid %d and parent pid %d \n", getpid(), getppid());
            }
            else
            {
                printf("A is parent of B, C, D, E, F and has pid %d \n", getpid());
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        wait(NULL);
    }

    return 0;
}