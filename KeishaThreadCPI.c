#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
struct arguments {
char* name;
long int matnum;
};

void *threadData(void *data) {
int *threadid = (int *)threadData;
printf("Name: %s\n", ((struct arguments*)data)->name);
printf("Matriculation Number: %ld\n", ((struct arguments*)data)->matnum);
printf("Thread ID: %d\n",*threadid);
return NULL;
}
int main() {
struct arguments *person = (struct arguments *)malloc(sizeof(struct arguments));
printf("This is a data collection application for the data of students.\n");

char name[30];
long int matnum;
int data;
loop1: 
	printf("Enter the name of the person: ");
	scanf("%s",name);
	
	printf("Enter the matriculation number of the person: ");
	scanf("%ld",&matnum);
	
person->name = name;
person->matnum = matnum;

pthread_t thread_id;
pthread_create(&thread_id, NULL, threadData, (void *)person);
pthread_join(thread_id, NULL);
loop2:
printf("Do you have more data to add. 1 means yes and 0 means no: ");
scanf("%d",&data);
if(data==1){ goto loop1;}
else if (data==0) {printf("Thank you for using the application. \n");}
else{printf("Invalid input. \n");
goto loop2;}
return 0;
}
