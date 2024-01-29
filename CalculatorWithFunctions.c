#include<stdio.h>

// Function For Addition
double add(double a, double b){
	return a+b;
}

// Function For Subtraction
double subtract(double a, double b){
	return a-b;
}

// Function For Multiplication
double multiply(double a, double b){
	return a*b;
}

// Function For Division
double divide(double a, double b){
	if(b==0){
		printf("Error: Division by Zero is not allowed.\n");
		return 0.0;
	}
	else
	return a/b;
}
int main()
{
    char operator;
	double num1, num2, result;
	printf("Enter an operator (+ , - , * , /)\n");
	scanf(" %c", &operator);
	
	printf("Enter First Number: \n");
	scanf("%lf", &num1);
	
	printf("Enter Second Number: \n");
	scanf("%lf", &num2);
	
	switch(operator)
	{
		case '+':
			result = add(num1, num2);
			break;
		case '-':
			result = subtract(num1, num2);
			break;
		case '*':
			result = multiply(num1, num2);
			break;
		case '/':
			result = divide(num1, num2);
			break;
		default:
			printf("Error: Invalid Character\n");
			return 1;
	}
	printf("Result = %lf", result);
	return 0;
}
