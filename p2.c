#include<stdio.h>
int main()
{
	// Print the largest of three numbers
	int num1, num2, num3;
	printf("Enter three numbers: \n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1 > num2 && num1 > num3)
	{
		printf("%d is greater then %d and %d", num1, num2, num3);
	}
	else if(num2 > num3 && num2 > num1){
		printf("%d is greater then %d and %d", num2, num3, num1);
	}
	else if(num3 > num2 && num3 > num1){
		printf("%d is greater then %d and %d", num3, num2, num1);
	}
	return 0;
}
