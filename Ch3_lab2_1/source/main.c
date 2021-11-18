#include<stdio.h>
#include<stdlib.h>
long int factor(int a);
int main()
{
	int m, n;
	long int ans;
	long int a, b, c;
	printf("求排列組合C\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);
	a=factor(m);
	b = factor(n);
	c = factor(m-n);
	ans = a / (b*c);
	printf("C(%d %d)=%d\n", m, n, ans);
	system("pause");
}
long int factor(int p)
{
	int count;
	long int result = 1;
	for (count = 1; count <= p; count++)
	{
		result = result * count;
	}
	return result;
}