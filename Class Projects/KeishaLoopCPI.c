#include <stdio.h>
int main(){
int portions,total=0,orders;
char choice,more;
printf("		Menu            	Price\n");
printf("P=Poundo Yam/Edinkaiko Soup    \t	N3200\n");
printf("F=Fried Rice & Chicken         \t	N3000\n");
printf("A=Amala & Ewedu Soup           \t	N2500\n");
printf("E=Eba & Egusi Soup             \t	N2000\n");
printf("W=White Rice & Stew            \t	N2500\n");

loop1:
printf("Enter what you would like to order: ");
scanf("%s",&choice);

switch(choice){
case 'P': 
 	printf("How many portions? ");
 	scanf("%d",&portions);
 	total = total + (portions*3200);
 	break;	
case 'p':
	printf("How many portions? ");
	scanf("%d",&portions);
	total = total + (portions*3200);
	break;
case 'F':
	printf("How many portions? ");
	scanf("%d",&portions);
	total = total + (portions *3000);
	break;
case 'f':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *3000);
	break;
case 'a':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *2500);
	break;
case 'A':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *2500);
	break;
case 'e':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *2000);
	break;
case 'E':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *2000);
	break;
case 'W':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *2500);
	break;
case 'w':
	printf("How many porrtions? ");
	scanf("%d",&portions);
	total = total + (portions *2500);
	break;

}

	loop2:
	printf("Do you have another order to place? ");
	printf("Y=yes and N=no ");
	scanf("%s",&more);
switch(more){
case 'Y':
	goto loop1;
	break;
case 'y':
	goto loop1;
	break;
case 'N':
	printf("Thank you for shopping with us. Total is %d",total);
	printf("\n");
	break;
case 'n':
	printf("Thank you for shopping with us. Total is %d",total);
	printf("\n");
	break;
default:
	printf("Invalid input. Try again\n");
	goto loop2;
	break;
}
	
}

