#include<stdio.h>
void nact();

int main()
{
	int n;
	printf("Natural numbers are: \n");
	scanf("%d", &n);
	nact(n);
	return 0;
	
}
void nact(int n)
{
	if(n>0){
	printf("%d",n);
	nact(n-1);

    }
}
