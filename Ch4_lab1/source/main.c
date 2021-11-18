#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7
int main(void)
{
	int face;
	int roll;
	int fre[SIZE] = {0};
	srand(time(NULL));
	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		++fre[face];
	}
	printf("%s%17s\n", "face", "frequency");
	for (face = 1; face < SIZE; face++)
	{
		printf("%4d%17d\n", face, fre[face]);
	}
}