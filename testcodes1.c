#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
pid_t pid;
int a =10, b=20, c=5, d=15;
pid = fork();
 if (pid<0) {
  	d = a>=b&&b<=c;
  	printf("\n d=%d",d);
  	return 1;
  }
  
 if(pid==0) {
 	d=b>d&&a==c;
 	printf("\n d1=%d\n",d);
 	}
 
 else{
 	d=d<b&&b!=c;
 	printf("\n d2=%d",d);
 	}
 
 return 0;
}
