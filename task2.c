#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6,s7,s8,total;
	float avg;
	printf("Enter English Marks: \n");
	scanf("%d", &s1);
	printf("Enter Urdu Marks: \n");
	scanf("%d", &s2);
	printf("Enter Maths Marks: \n");
	scanf("%d", &s3);
	printf("Enter Physics Marks: \n");
	scanf("%d", &s4);
	printf("Enter Chemistry Marks: \n");
	scanf("%d", &s5);
	printf("Enter Computer Marks: \n");
	scanf("%d", &s6);
	printf("Enter Pak-Std Marks: \n");
	scanf("%d", &s7);
	printf("Enter Islamiyat Marks: \n");
	scanf("%d", &s8);
	total=s1+s2+s3+s4+s5+s6+s7+s8;
	avg=total/7.0;
	printf("Total Marks are: %d \n", total);
	printf("Average is: %.2f", avg);
	return 0;
	
}