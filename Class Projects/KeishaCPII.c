// Program that takes input of experience and age and determines the salary
#include <stdio.h>
int main() {
	int age;
	int experience;
	
	printf("Enter your age in years: ");
	scanf("%d", &age);
	
	printf("What is your experience in years? ");
	scanf("%d", &experience);
	
	if (experience >= 1) {
	if (age>=40) {
		printf("Your salary is N560,000.\n");
	}
	
	else if (40<=age>=30) {
		printf("Your salary is N480,000.\n");
	}	
		
	else if (age<28) {
		printf("Your salary is N300,000.\n");
	}
	else {
		printf("You do not have an allocated salary.\n");
	}
	}
	
	else {
		printf("Your salary is N100,000.\n");
	}
		
	
	
	return 0;
	
}
