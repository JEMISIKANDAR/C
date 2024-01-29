#include<stdio.h>
int main()
{
	double num;
	printf("Enter a real value: \n");
	scanf("%lf", &num);
	if(num<0){
		num = -num;
		
	}
	printf("The absolute value is %g \n", num);
	return 0;
}
