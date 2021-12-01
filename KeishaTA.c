// Program that accepts any character, float or integer and prints the next four corresponding characters, floats or integers in multiples of 3; the ASCII code and the size of the operator
#include<stdio.h>
int main()
{
  int type, a, d;
  float b;
  char c;
  
  loop:
  printf("Enter what data type your value is. Type 1 for Integer; 2 for Float; and 3 for Character. ");
  scanf("%d", &type);
  
  switch(type) {
  case 1: 
  	printf("Enter your integer value: \n");
  	scanf("%d", &a);
  	for(d=12; d>=1; --d)
  		if(d%3==0){
  		a = a+3;
           	printf("The next integer is %d  ",a);
           	printf("ASCII value is %c  ",a);
           	printf("The size is %lu   ", sizeof(a));
           	printf("\n");}
           	else{
           	continue;}
        printf("\n");    	
  	break;
  
  case 2: 
  	printf("Enter your float value: \n");
  	scanf("%f", &b);
  	for(d=12; d>=1; --d)
  		if(d%3==0){
  		b = ++b;
  		b = ++b;
  		b = ++b;
           	printf("The next float is %f  ",b);
           	printf("The size is %lu  ",sizeof(b));
           	printf("\n");}
           	else{
           	continue;}
        printf("\n");
  	break;
  
  case 3:
  	printf("Enter your character: \n");
  	scanf("%s", &c);
  	for(d=1; d<=12; ++d)
  		if(d%3==0){
  		c = ++c;
  		c = ++c;
  		c = ++c;
           	printf("The next character is %c ", c);
           	printf("ASCII value is %d ",c);
           	printf("The size is %lu ",sizeof(c));
           	printf("\n");}
           	else{
           	continue;}
        printf("\n");
        break;

  
  default: 
  	printf("There is no allocated data type for this choice. Try again. \n");
  	goto loop;
  }
  
  return 0;
}
  
