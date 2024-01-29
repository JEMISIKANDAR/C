#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d", &n);
	if(n>0){
		printf("It's a positive number. \n");
	}
	else if(n<0){
		printf("It's a negative number. \n");
	}
	else{
		printf("It's 0.");
	}
	return 0;
}
