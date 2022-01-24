#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

struct arguments {
char* challenges;
};

void *data(void* ID){
	long * stackID=(long * )ID;
	printf("%s", ((struct arguments*)data)->challenges); printf("%ld",*stackID);
}

int main(){
	struct arguments *paystack = (struct arguments *)malloc(sizeof(struct arguments));
	int operations, c =2,a=2;
	char challenges[50];
	printf("How many operations will you like to monitor \n");
	scanf("%d", &operations);
	
	while(operations>0){
	paystack->challenges = challenges;
	printf("Enter the operational challenge: ");
	scanf("%s",challenges);
	while (c>0) {
	pthread_t challenge_id;
	pthread_t *pthread[]={&challenge_id};
	pthread_create(pthread[c],NULL,data,(void *)paystack);
		sleep(1);
		pthread_join(challenge_id, NULL);
		c--;}
		
		c = ++a;
  		c = ++a;
		--operations;
	}
	pthread_exit(NULL);
 	return 0;


}
