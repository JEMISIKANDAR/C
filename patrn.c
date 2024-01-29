#include<stdio.h>
int main()
{
	int i,j, rows;
	printf("Enter number of rows: \n");
	scanf("%d", &rows);
	for(i=1; i<=rows; i++)
	{
		for(j=rows; j>=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
