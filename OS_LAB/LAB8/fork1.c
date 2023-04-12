#include <stdio.h>

#include <unistd.h>

#include <sys/wait.h>

int main()
{
    int A, B, C;
    printf("Parent A id:%d\n", getpid());
    B = fork();
    if (B != 0)
    {
        printf("Child A(B) id:%d\n", getpid());
        printf("Parent of  B id:%d\n", getppid());
        C = fork();
        if (C == 0)
        {
            printf("Child A(C) id:%d\n", getpid());
            printf("Parent of C id:%d\n", getppid());
        }
    }
    return 0;

    for( int i = 0; i < 3; i++)
    {
        wait(NULL);
    }
    
}