#include <stdio.h>

#include <unistd.h>

#include <sys/types.h>

int main()
{
    int A, B, C;
    printf("Parent A id:%d\n", getppid());
    B = fork();
    if (B != 0)
    {
        printf("Child of A(B) id:%d\n", getpid());
        printf("Parent of  B id:%d\n", getppid());
        C = fork();
        if (C == 0 && B != 0)
        {
            printf("Child of A(C) id:%d\n", getpid());
            printf("Parent of C id:%d\n", getppid());
        }
    }
    return 0;


}
