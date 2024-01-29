//	Receive an integer number from user as input and finds out whether it is even or odd integer
#include<stdio.h>
int main()
{
	int num;
	printf("Enter an integer: \n");
	scanf("%d", &num);
	if(num%2==0){
		printf("%d is even integer! \n", num);
	}
	else
	    printf("%d is odd! \n", num);
	    
	return 0;
}
