#include <stdio.h>

#define MAX_PROCESS 10

// Process struct
typedef struct process
{
    int pid;             // process ID
    int arrival_time;    // arrival time of the process
    int burst_time;      // burst time of the process
    int remaining_time;  // remaining time of the process
    int waiting_time;    // waiting time of the process
    int turnaround_time; // turnaround time of the process
} process;

// Find the process with the shortest remaining time
int find_shortest(process p[], int n, int current_time)
{
    int i, shortest = -1;
    for (i = 0; i < n; i++)
    {
        if (p[i].arrival_time <= current_time && p[i].remaining_time > 0)
        {
            if (shortest == -1 || p[i].remaining_time < p[shortest].remaining_time)
            {
                shortest = i;
            }
        }
    }
    return shortest;
}

// SRTF Scheduler function
void srtf(process p[], int n)
{
    int i, j, current_time = 0, total_time = 0;
    float avg_wait_time = 0, avg_turnaround_time = 0;

    // Initialize remaining time for each process
    for (i = 0; i < n; i++)
    {
        p[i].remaining_time = p[i].burst_time;
    }

    // Execute the processes
    i = 0;
    while (i < n)
    {
        int shortest = find_shortest(p, n, current_time);
        if (shortest == -1)
        {
            current_time++;
        }
        else
        {
            p[shortest].remaining_time--;
            current_time++;
            if (p[shortest].remaining_time == 0)
            {
                p[shortest].waiting_time = current_time - p[shortest].arrival_time - p[shortest].burst_time;
                p[shortest].turnaround_time = current_time - p[shortest].arrival_time;
                avg_wait_time += p[shortest].waiting_time;
                avg_turnaround_time += p[shortest].turnaround_time;
                total_time += p[shortest].burst_time;
                i++;
            }
        }
    }

    // Calculate average wait time and average turnaround time
    avg_wait_time /= n;
    avg_turnaround_time /= n;

    // Print the results
    printf("Process ID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].pid, p[i].arrival_time, p[i].burst_time, p[i].waiting_time, p[i].turnaround_time);
    }
    printf("Average Wait Time: %.2f\n", avg_wait_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
}

int main()
{
    int i, n;
    process p[MAX_PROCESS];

    // Read the number of processes, arrival time, and burst time from the user
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the arrival time and burst time of the processes:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d %d", &p[i].arrival_time, &p[i].burst_time);
        p[i].pid = i + 1;
    }

    // Call the SRTF scheduler function
    srtf(p, n);

    return 0;
}
