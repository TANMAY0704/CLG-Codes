#include <stdio.h>
#include <stdlib.h>
struct process
{
    int pno;
    int at, bt, ct, tat, rt, wt;
};

int main()
{
    int n, i, j;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    struct process p[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the arrival time and burst time of process %d : ", i + 1);
        scanf("%d%d", &p[i].at, &p[i].bt);
        p[i].pno = i + 1;
    }
    for (i = 0; i < n; i++)
    { 
        for (j = i + 1; j < n; j++)
        {
            if (p[i].at > p[j].at)
            {
                struct process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    int time = 0;
    for (i = 0; i < n; i++)
    {
        if (time < p[i].at)
        {
            time = p[i].at;
        }
        time += p[i].bt;
        p[i].ct = time;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;    
        p[i].rt = p[i].wt;

    }

    printf("Process\tAT\tBT\tCT\tTAT\tWT\tRT \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pno, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt,p[i].rt);
    }

    return 0;
}