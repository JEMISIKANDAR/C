#include<stdio.h>
int main()
{
	int a, b, c, tmp;
	printf("Enter three number's for sorting.\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		a=tmp;
		b=tmp;
		a=b;
		if(a>c){
			a=tmp;
			tmp=c;
			a=c;
		}
		if(b>c){
			b=tmp;
			tmp=b;
			b=c;
		}
	}
	printf(a,b,c);
	return 0;
	
}
