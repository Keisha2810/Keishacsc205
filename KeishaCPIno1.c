// Program to input a user's age and display voting status
#include <stdio.h>
int main() {
	int age;
	
	printf("Enter your age in years: ");
	scanf("%d", &age);
	
	if (age > 18) {
		printf("Your age is %d. You can vote.\n", age);
	}
	
	else {
		printf("Your age is %d. You cannot vote.\n", age);
	}
	
	return 0;
	
}
