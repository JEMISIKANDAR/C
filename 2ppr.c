#include<stdio.h>
#include<conio.h>
int main()
{
   int i, j, n;
   printf("Enter number of rows: \n");
   scanf("%d", &n);

   for(i=1; i<=n; i++)
   {
   	for(j=n; j>=i; j--)
   	{
   		printf("*");
	   }
	   
	   printf("\n");
	   }	
}
