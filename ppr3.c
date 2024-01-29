/* Get the position of a letter in the abc */
#include <stdio.h>

int main(void)
{	
	char letter;

	printf("Please enter a lowercase letter\n");
	scanf("%c", &letter);
	printf("The position of this letter in the abc is %d\n", letter-'a'+1);

	return 0;
}

