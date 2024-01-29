#include<stdio.h>
int main()
{
	int num1, num2, sum, product, quotient, subtraction;
	printf("Enter First Number: \n");
	scanf("%d", &num1);
	printf("Enter Second Number: \n");
	scanf("%d", &num2);
	sum=num1+num2;
	product=num1*num2;
	quotient=num1/num2;
	subtraction=num1-num2;
	printf("The Sum is %d: \n",sum);
	printf("The Product is %d: \n",product);
	printf("The Quotient is %d: \n",quotient);
	printf("The Difference is %d: \n",subtraction);
	return 0;
}
