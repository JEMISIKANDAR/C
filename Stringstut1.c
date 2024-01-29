#include<stdio.h>
#include<conio.h>
int main()
{
	char str[10];     //= {'B', 'H', 'O', 'P', 'A', 'L'};
	
	printf("Enter your name: \n");
	fgets(str,10,stdin);
	
	printf("%s", str);	
	
	/*int i;
	for(i=0; str[i]; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");*/
	return 0;
}

