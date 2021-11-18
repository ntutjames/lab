#include<stdio.h>
#include<stdlib.h>
long int recursive_factor(int a);
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
	a = recursive_factor(m);
	b = recursive_factor(n);
	c = recursive_factor(m - n);
	ans = a / (b*c);
	printf("C(%d %d)=%d\n", m, n, ans);
	system("pause");
}
long int recursive_factor(int p)
{
	if (p > 1)
	{
		long int result = p * recursive_factor(p - 1);
		return result;
	}
	else
	{
		return 1;
	}
}