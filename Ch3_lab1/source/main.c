#include<stdio.h>
#include<stdlib.h>

	int odd(int u);
	int even(int u);
	int total(int u);
	int main()
	{
		int n, sum;
		char choice;
		printf("1+....n=?��Jn");
		scanf_s("%d", &n);
		printf("�аݭn���_�� ���� �٬O��ƩM");
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
				printf("��ܿ��~\n");
				return -1;
		}
		printf("�`�X��%d\n", sum);
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