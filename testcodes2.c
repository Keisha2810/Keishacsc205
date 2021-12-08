#include <stdio.h>
int main()
{
	int i=53, j=17, k=75;
	int p =50, s=77, z, m, q;
	z=i&j;
	m=k^z;
	z+=m;
	if((m==z)||(z>=i)){
	printf("m = %d, z= %d\n",m,z);
	}
	if((m!=s)||(p>=i)){
	q=z^s;
	printf("q =%d\n",q);
	}
	return 0;
}
