// 3-Digit number in reverse order
#include<stdio.h>
int main()
{
	int number, reverse;
	printf("Enter 3-Digit Number: \n");
	scanf("%d", &number);
	
	int digit1= number%10;
	int digit2= (number/10)%10;
	int digit3= number/100;
	
	printf ( "Number in reverse order is %d%d%d \n", digit1,digit2,digit3);
	
	return 0;
}
