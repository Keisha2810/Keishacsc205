// Program that accepts a character between A to J and prints the next 6 characters
#include <stdio.h>
int main() 
{ 
	int d;
	char c;
	printf("Enter a letter between A to J: ");
	scanf("%c", &c);
	
	if (c <= 'J' || c<= 'j'){
	   for(d=6; d>=1; --d)
	   if(d<=6){
	   ++c;
           printf("%c \n",c);}
           else { break; }
         }
          
       else{ printf("Your value is invalid. Follow instructions next time.\n");
           }
		
	return 0;
}

