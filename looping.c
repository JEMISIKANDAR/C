#include<stdio.h>
int main()
{
	int number;
	int count=0;
	int sum=0;
	int min=-1;
	int max=1;
	
	while(1){
		printf("Enter positive integer (Or -1 to exit)\n");
		scanf("%d", &number);
		
		if(number==-1){
			break;
		}
		
		if(number<0){
			printf("Enter positive integer (Or -1 to exit)\n");
			continue;
		}
		
		sum +=number;
		count++;
		
		if(max==-1 || number>max){
			max = number;
		}
		if(min == -1 || number<min){
			min = number;
		}
	}
	if(count>0){
		double average= (double)sum/ count;
		printf("Count of number: %d \n", count);
		printf("Maximum Number: %d \n", max);
		printf("Minimum Number: %d \n", min);
		printf("Average: %.2lf \n", average);
		
	}
	else{
		printf("No numbers were entered. \n");
	}
	return 0;
	
}
