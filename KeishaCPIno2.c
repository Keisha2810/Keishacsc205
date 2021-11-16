// Program that takes inut in three subjects and calculates the total, average and percentage.

#include <stdio.h>
int main() {
	float score1, score2, score3, score4, output;
	loop:
	printf("Enter score in CSC201: ");
	scanf("%f", &score1);
	printf("Enter score in CSC205: ");
	scanf("%f", &score2);
	printf("Enter score in STA205: ");
	scanf("%f", &score3);
	printf("Enter what the grades are over e.g over 100, over 10, over50: ");
	scanf("%f", &score4);
	
	if (score1, score2, score3 > score4) {
		printf("The grades cannot be greater than what it is scored over.\n");
		goto loop;
	}
	else {
	output = score1 + score2 + score3;
	printf("The total score in the three subjects = %f\n", output);
	output = (score1 + score2 + score3)/3;
	printf("The average score in the three subjects = %f\n", output);
	output = ((score1 + score2 + score3)/(score4*3))*100;
	printf("The total percentage score in the three subjects = %f\n", output);
	}
	
	return 0;
	
}
	
