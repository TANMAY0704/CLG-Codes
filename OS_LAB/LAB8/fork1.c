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
        print("Child A(C) id:%d\n", getpid());
        printf("Parent of  B id:%d\n", getppid());
        C = fork();
        if (C == 0)
        {
            print("Child A(C) id:%d\n", getpid());
            printf("Parent of C id:%d\n", getppid());
        }
    }
    return 0;
}
