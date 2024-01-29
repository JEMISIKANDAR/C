#include<stdio.h>
int main()
{
	int s1, s2, s3, s4, s5;
	float percent, total;
	printf("Enter all five sunjects marks: \n");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	total=s1+s2+s3+s4+s5;
	percent=(total/500)*100;
	if(percent>=60){
		printf("First Division \n");
	}
	else if(percent>=50){
		printf("Second Division \n");
	}
	else if(percent>=40){
		printf("Third Division \n");
	}
	else
	{
		printf("Fail \n");
	}
	return 0;
}
