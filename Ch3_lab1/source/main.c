#include<stdio.h>
#include<stdlib.h>

	int odd(int u);
	int even(int u);
	int total(int u);
	int main()
	{
		int n, sum;
		char choice;
		printf("1+....n=?輸入n");
		scanf_s("%d", &n);
		printf("請問要做奇數 偶數 還是整數和");
		scanf_s(" %c", &choice);
		switch (choice)
		{
			case'O':
				sum = odd(n);
				break;
			case'E':
				sum = even(n);
				break;
			case'I':
				sum = total(n);
				break;
			default:
				printf("選擇錯誤\n");
				return -1;
		}
		printf("總合為%d\n", sum);
		system("pause");
		return 0;
	}
	int odd(int u)
	{
		int i, total = 0;
		for (i = 1; i <= u; i++)
			if(i % 2==1)
			total = total + i;
		return total;
	}
	int even(int u)
	{
		int i, total = 0;
		for (i = 1; i <= u; i++)
			if (i % 2 == 0)
				total = total + i;
		return total;
	}
	int total(int u)
	{
		return odd(u) + even(u);
	}