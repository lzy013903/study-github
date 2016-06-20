#include <stdio.h>


int fun(int x,int y)
{
	printf("x=%d\ny=%d\n",x,y);
	return 0;
}
int main()
{
	int (*func)(int,int);
	func = fun;
	
	(*func)(1,2);
	
	return 0;	
} 


