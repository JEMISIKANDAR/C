/* Write a program that accepts as input – // how this works??
           A lowercase letter and outputs –
            The same letter in uppercase 
            (e.g., if the input is ‘g’, the output should be ‘G’) */

#include<stdio.h>
int main()
{
	char lower, upper;
	printf("Enter lowercase letter: \n");
	scanf("%c", &lower);
	printf("%c in Uppercase is %c\n \a", lower, lower-'a'+'A');
	
	return 0;
}
