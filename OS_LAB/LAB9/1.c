#include <stdio.h>
#include <pthread.h>

#define ARRAY_SIZE 10

int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int sum = 0;

void *add_from_start(void *arg)
{
    int i;
    int thread_sum = 0;
    for (i = 0; i < ARRAY_SIZE / 2; i++)
    {
        thread_sum += array[i];
    }
    sum += thread_sum;
    pthread_exit(NULL);
}

void *add_from_end(void *arg)
{
    int i;
    int thread_sum = 0;
    for (i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++)
    {
        thread_sum += array[i];
    }
    sum += thread_sum;
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, add_from_start, NULL);
    pthread_create(&thread2, NULL, add_from_end, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Sum of all elements in array: %d\n", sum);

    return 0;
}