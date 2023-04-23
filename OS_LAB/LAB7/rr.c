#include <stdio.h>

#define MAX_PROCESS 10

// Process struct
typedef struct process {
    int pid; // process ID
    int burst_time; // burst time of the process
    int remaining_time; // remaining time of the process
} process;

// Round Robin Scheduler function
void round_robin(process p[], int n, int time_slice) {
    int i, j, total_time = 0;
    float avg_wait_time = 0, avg_turnaround_time = 0;

    // Create a copy of the original process array to keep track of remaining time
    process p_copy[MAX_PROCESS];
    for(i = 0; i < n; i++) {
        p_copy[i] = p[i];
    }

    // Execute the processes in a round-robin fashion
    while(1) {
        int done = 1;
        for(i = 0; i < n; i++) {
            if(p_copy[i].remaining_time > 0) {
                done = 0;
                if(p_copy[i].remaining_time > time_slice) {
                    // Execute the process for the time slice
                    total_time += time_slice;
                    p_copy[i].remaining_time -= time_slice;
                } else {
                    // Execute the process for the remaining time
                    total_time += p_copy[i].remaining_time;
                    p_copy[i].remaining_time = 0;
                    // Calculate wait time and turnaround time
                    p[i].burst_time = total_time;
                    avg_wait_time += total_time - p[i].burst_time;
                    avg_turnaround_time += total_time;
                }
            }
        }
        if(done == 1) break; // All processes are executed
    }

    // Calculate average wait time and average turnaround time
    avg_wait_time /= n;
    avg_turnaround_time /= n;

    // Print the results
    printf("Process ID\tBurst Time\tWait Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%.2f\t\t%.2f\n", p[i].pid, p[i].burst_time, p[i].burst_time - p[i].remaining_time, p[i].burst_time);
    }
    printf("Average Wait Time: %.2f\n", avg_wait_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
}

int main() {
    int i, n, time_slice;
    process p[MAX_PROCESS];

    // Read the number of processes, burst time, and time slice from the user
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the burst time of the processes:\n");
    for(i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &p[i].burst_time);
        p[i].pid = i + 1;
        p[i].remaining_time = p[i].burst_time;
    }
    printf("Enter the time slice: ");
    scanf("%d", &time_slice);

    // Execute the processes using the Round Robin Scheduler
    round_robin(p, n, time_slice);

    return 0;
}
