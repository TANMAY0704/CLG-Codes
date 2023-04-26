#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

int x = 5;
sem_t s;

void *f1()
{
    sem_wait(&s);
    x = x + 5;
    printf("Value of x in thread 1 : %d\n", x);
    sem_post(&s);
}
void *f2()
{
    sem_wait(&s);
    x = x - 5;
    printf("Value of x in thread 2 : %d\n", x);
    sem_post(&s);
}

int main()
{
    sem_init(&s, 0, 1);
    pthread_t t1, t2;
    pthread_create(&t1, NULL, f1, NULL);
    pthread_create(&t2, NULL, f2, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
   
    printf("x = %d \n", x);
    

    return 0;
}
