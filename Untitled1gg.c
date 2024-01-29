#include<stdio.h>
int main()
{
char c;
printf("Please enter an english letter: ");
scanf("%c", &c);
if (c <= 'z' && c >= 'a')
 printf("%c in uppercase is %c\n", c, c-'a'+'A');
else if (c <= 'Z' && c >= 'A')
 printf("%c in lowercase is %c\n", c, c-'A'+'a');
else
{
printf("%c is not an english letter!\n", c);
return 1;
}
return 0;
}