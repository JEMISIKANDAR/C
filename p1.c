#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer: \n");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("%d is an even integer.\n", n);
	}
	else
	{
		printf("%d is an odd integer. \n", n);
	}
	return 0;
}
