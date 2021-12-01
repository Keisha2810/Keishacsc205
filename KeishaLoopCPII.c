#include <stdio.h>
int main(){
int k,m,n,o;
printf("Enter the value of n: \n");
scanf("%d",&n);

printf("Multiplication table from to 1 to %d",n);
printf("\n");

for(m =1; m<=12; ++m){
for(k=1; k<=n; ++k) {
		o = k*m;
		printf("%d", o);
		printf("\t");
		}
		printf("\n");
	}
return 0;
}
