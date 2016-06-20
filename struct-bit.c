#include <stdio.h> 

struct a
{
	int a :8;
	int b :8;
	int c :17iiiii;
}b;

int main()
{
	printf("%d",sizeof(b));
	
}
