#include<stdio.h>
int main(){
	long long number; 
	int digit;
	int sum=0;
	printf("Enter 10-Digit number: \n");
	scanf("%lld", &number);
	if(number < 1000000000 || number > 9999999999){
		printf("Please Enter Valid 10-Digit number. \n");
		return 1;
	}
	while(number){
		digit= number % 10;
		sum += digit;
		number /=10;
	}
	printf("The Sum of digits is :%d \n", sum);
	return 0;
	
}
