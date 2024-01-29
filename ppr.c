#include<stdio.h>
#include<conio.h>
int main()
{
	long n=0;
	printf("Enter 3 digits number: \n");
	scanf("%ld", &n);
	printf("the outpur is \n");
		printf("\t %d", n%10);
		printf("\t %d", n/10%10);
		printf("\t %d", n/100%10);
		
		getch();
		
}
