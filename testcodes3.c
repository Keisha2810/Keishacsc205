#include <stdio.h>
int main() {
	int ada=15, bot =13;
	int cpu=14, dos=12, hex=22;
	ada-=bot;
	for(int i=1; i< ada; ++i)
	{
		hex+=i;
		dos-=hex;
		cpu%=bot;
		
		printf("%d, %d\n",dos,hex);
		printf("%d\n",cpu);
	}
	return 0;
	}
