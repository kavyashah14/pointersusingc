#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x=2;
	int *p;
	p=&x;
	printf("\n %d value of variable", x);
	printf("\n %d Value at address",*p);
	printf("\n %d Value of pointer variable",p);
	printf("\n %d address of pointer variable",&p);
	printf("\n %d address of variable", &x);
	
}
