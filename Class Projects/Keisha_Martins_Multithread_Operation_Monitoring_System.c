#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *OnlineFraud(void* ID1){
	long * stackID1=(long * )ID1;
	printf ("Online Fraud %ld \n",*stackID1);
}
void *Chargeback(void* ID2){
	long * stackID2=(long * )ID2;
	printf ("Chargeback %ld \n",*stackID2);
}

void *Payment(void* ID3){
	long * stackID3=(long *)ID3;
	printf ("Payment Gateway Issue %ld \n",*stackID3);
}

void *ContUpdate(void* ID4){
	long * stackID4=(long *)ID4;
	printf ("Continuous update %ld \n",*stackID4);
}

void *UserEC(void* ID5){
	long * stackID5=(long *)ID5;
	printf ("User experience challenges %ld \n",*stackID5);
}

void *Multicurrency(void* ID6){
	long * stackID6=(long *)ID6;
	printf ("Multi-currency payment %ld \n",*stackID6);
}

void *Others(void* ID7){
	long * stackID7=(long *)ID7;
	printf ("%ld \n",*stackID7);
}

int main(){

	printf("There are a few operation challenges namely : \n 1. Online Fraud \n 2. Chargeback \n 3. Payment gateway challenges \n 4. Continuous update \n 5. User experience challenges \n 6. Multi-currency payment \n 7. Others \n"); 
	
	int operations, challenges, c =2,a=2;
	loop3:
	printf("How many operational challenges would you like to monitor \n");
	scanf("%d", &operations);
	
	pthread_t onlinefraud;
	pthread_t chargeback;
	pthread_t paymentgatewayissue;
	pthread_t continuousupdate;
	pthread_t userexperiencechallenges;
	pthread_t multicurrencypayment;
	pthread_t others;

	while(operations>0){
		loop1:
		printf("Which operational challenge are you monitoring? \n");
		scanf("%d", &challenges);
		if (challenges == 1){
		while (c>0) {
		pthread_create(&onlinefraud,NULL,OnlineFraud,(void *)&onlinefraud);
		sleep(1);
		--c;
		}
		}
		
		else if (challenges == 2){
		while (c>0) {
		pthread_create(&chargeback,NULL,Chargeback,(void *)&chargeback);
		sleep(1);
		--c;
		}
		}
		
		else if (challenges == 3){
		while (c>0) {
		pthread_create(&paymentgatewayissue,NULL,Payment,(void *)&paymentgatewayissue);
		sleep(1);
		--c;
		}
		}
		
		else if (challenges == 4){
		while (c>0) {
		pthread_create(&continuousupdate,NULL,ContUpdate,(void *)&continuousupdate);
		sleep(1);
		--c;
		}
		}
		
		else if (challenges == 5){
		while (c>0) {
		pthread_create(&userexperiencechallenges,NULL,UserEC,(void *)&userexperiencechallenges);
		sleep(1);
		--c;
		}
		}
		
		else if (challenges == 6){
		while (c>0) {
		pthread_create(&multicurrencypayment,NULL,Multicurrency,(void *)&multicurrencypayment);
		sleep(1);
		--c;
		
		}
		}
		else if (challenges == 7){
		char  other[500];
		printf("Type operational challenge name: ");
		scanf("%s",other);
		while(c>0) {
		printf("%s  ",other); pthread_create(&others,NULL,Others,(void *)&others);
		sleep(1);
		--c;
		
		}
		}
		else{printf("Invalid input. \n");
		goto loop1;
		sleep(1);}
		
		c = ++a;
  		c = ++a;
		--operations;
		
	}
	
	char answer;
	loop2:
	printf("Do you have any more challenges to add? Put Y for yes or N for no    ");
	scanf("%s", &answer);
	if (answer == 'Y' || answer == 'y'){
	    goto loop3;
	    }
	else if(answer == 'N' || answer == 'n'){
 	    printf("Thank you for using the program. \n");
 	    }
 	else {
 		printf("Invalid. Try again \n");
 		goto loop2;}
 	    
          pthread_exit(NULL);
 return 0;

     
         }
         
         		
		
	
