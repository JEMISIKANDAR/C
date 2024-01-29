#include<stdio.h>
int main()
{
	int A0_width = 1189;
	int A0_height = 841;
	int A1_width = A0_height;
	int A1_height = A0_width/2;
	int A2_width = A1_height;
	int A2_height = A1_width/2;
	int A3_width = A2_height;
	int A3_height = A2_width/2;
	int A4_width = A3_height;
	int A4_height = A3_width/2;
	int A5_width = A4_height;
	int A5_height = A4_width/2;
	int A6_width = A5_height;
	int A6_height = A5_width/2;
	int A7_width = A6_height;
	int A7_height = A6_width/2;
	int A8_width = A7_height;
	int A8_height = A7_width/2;
	
	printf("Size of A0 is: %d x %d mm\n",A0_width, A0_height);
	printf("Size of A1 is: %d x %d mm\n",A1_width, A1_height);
	printf("Size of A2 is: %d x %d mm\n",A2_width, A2_height);
	printf("Size of A3 is: %d x %d mm\n",A3_width, A3_height);
	printf("Size of A4 is: %d x %d mm\n",A4_width, A4_height);
	printf("Size of A5 is: %d x %d mm\n",A5_width, A5_height);
	printf("Size of A6 is: %d x %d mm\n",A6_width, A6_height);
	printf("Size of A7 is: %d x %d mm\n",A7_width, A7_height);
	printf("Size of A8 is: %d x %d mm\n",A8_width, A8_height);
	
	return 0;
}
