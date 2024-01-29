#include<stdio.h>

int main(void)
{
	int i, j, size;

	printf("Please enter a size:\n");
	scanf("%d",&size);
	for (i = 1; i <= size; i++)
	{
		for(j = i; j <= size; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}

