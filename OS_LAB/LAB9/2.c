#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define ARRAY_SIZE 10

int array[ARRAY_SIZE] = {5, 2, 9, 1, 7, 8, 4, 6, 3, 0};

typedef struct
{
    int start_index;
    int end_index;
} sort_params;

void merge(int start_index, int mid_index, int end_index)
{
    int temp[end_index - start_index + 1];
    int i = start_index, j = mid_index + 1, k = 0;

    while (i <= mid_index && j <= end_index)
    {
        if (array[i] < array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid_index)
    {
        temp[k++] = array[i++];
    }

    while (j <= end_index)
    {
        temp[k++] = array[j++];
    }

    for (i = start_index, k = 0; i <= end_index; i++, k++)
    {
        array[i] = temp[k];
    }
}

void *merge_sort(void *arg)
{
    sort_params *params = (sort_params *)arg;
    int start_index = params->start_index;
    int end_index = params->end_index;

    if (start_index < end_index)
    {
        int mid_index = (start_index + end_index) / 2;

        pthread_t thread1, thread2;
        sort_params params1 = {start_index, mid_index};
        sort_params params2 = {mid_index + 1, end_index};

        pthread_create(&thread1, NULL, merge_sort, &params1);
        pthread_create(&thread2, NULL, merge_sort, &params2);

        pthread_join(thread1, NULL);
        pthread_join(thread2, NULL);

        merge(start_index, mid_index, end_index);
    }

    pthread_exit(NULL);
}

int main()
{
    pthread_t thread;

    sort_params params = {0, ARRAY_SIZE - 1};

    pthread_create(&thread, NULL, merge_sort, &params);

    pthread_join(thread, NULL);

    int i;
    printf("Sorted array: ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}