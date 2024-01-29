#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year: \n");
	scanf("%d", &year);
	if((year%4==0 && year%100!=0) || year%400==0){
		printf("Its a leap year. \n");
	}
	else
	{
		printf("Not a leap year. \n");
	}
	return 0;
	
}
