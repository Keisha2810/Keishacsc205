#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int grade = 80;
// Create a global variable to change it in threads
void *myThreadAdd(void *vargp)
{
	int *myid = (int *)vargp; // Store the value argument passed to this thread
	static int age = 17; // Create a static variable to observe its changes
	++age; ++grade; // Change static anf global variables
	printf("Thread ID: %d, Age: %d, Grade: %d\n", *myid, ++age, ++grade);
}

int main()
{
	int t;
	pthread_t tid;
	
	// Let us create three threads
	for (t =0; t<5; t++)
		pthread_create(&tid, NULL, myThreadAdd, (void *)&tid);
		pthread_join(tid, NULL);
		
	pthread_exit(NULL);
	return 0;
}
