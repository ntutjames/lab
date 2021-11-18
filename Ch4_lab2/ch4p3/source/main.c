#include<stdio.h>
#include<stdlib.h>
void inverse(int *);
int main()
{
	int x = 100;
	int y = addbyone(&x);
	printf("x=%d\n", x);
}
int addbyone(int* xptr)
{
	(*xptr)++;
	printf("*xptr=%d\n", *xptr);
	return *xptr;
}