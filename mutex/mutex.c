/******************************************
 * This Program shows how to use pthreads with mutex abilites.
 * To Compile use:
 * $gcc mutex.c -o mutex -lpthread 
 * ****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

void *myfunc1(void *ptr);
void *myfunc2(void *ptr);

pthread_mutex_t lock;
int a[100];

int main(int argc, char **argv)
{
	pthread_t thrd1, thrd2;
	int thret1, thret2;
	char *msg1 = "First thread";
	char *msg2 = "Second thread";

	memset(a, 0, sizeof(a));

	thret1 = pthread_create(&thrd1, NULL, myfunc1, (void *)msg1);
	thret2 = pthread_create(&thrd2, NULL, myfunc2, (void *)msg2);

	pthread_join(thrd1, NULL);
	pthread_join(thrd2, NULL);

	printf("thret1 = %d\n", thret1);
	printf("thret2 = %d\n", thret2);

	return 0;
}

void *myfunc1(void *ptr)
{
	/*This part of code will be processed in parallel. */
	int i;
	char *msg = (char *)ptr;

	/*From here it will wait until the mutex was unlocked */
	pthread_mutex_lock(&lock);
	printf("\nmsg: %s\n", msg);
	for(i = 0; i < 100; i++)
	{
		printf("X");
		a[i]=i;
	}
	pthread_mutex_unlock(&lock);
}

void *myfunc2(void *ptr)
{
	/*This part of code will be processed in parallel. */
	int i;
	char *msg = (char *)ptr;

	/*From here it will wait until the mutex was unlocked */
	pthread_mutex_lock(&lock);
	printf("\nmsg: %s\n", msg);
	for( i = 0; i < 100; i++)
	{
		printf("%d, ",a[i]);
	}
	pthread_mutex_unlock(&lock);
}
