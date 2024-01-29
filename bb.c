#include<stdio.h>
#include<stdlib.h>

int factorial();
int primecheck();
int evenodd();
void end();

int main()
{
	int choice;
	while(1){
	
	printf("<--------------------------------MENU----------------------------->\n");
	printf("\t1. Factorial Of Number \n");
	printf("\t2. Prime Or Not \n");
	printf("\t3. Odd Or Even \n");
	printf("\t4. Exit \n");
	printf("<------------------------------------------------------------------>\n");
    printf("\t\t\t<-Enter Your Choice->\n");
	scanf("%d", &choice);
	
		switch(choice)
		{
			case 1:
				factorial();
				break;
			case 2:
				primecheck();
				break;
			case 3:
				evenodd();
				break;
			case 4:
				printf("Exiting the program. GoodByee!");
				end();
				break;
			default:
                printf("Invalid choice! Please enter a valid option.\n");
		}
		
}
	return 0;
}

// Factorial Finding
int factorial()
{
	int n, f=1;
	printf("Enter Number to get its Factorial: \n");
	scanf("%d", &n);
	for(int i =1; i<=n; i++)
	{
		f = f*i;
	}
	printf("Factorial is: %d \n", f);
	return f;
}

// Prime Or Not Checking
int primecheck()
{
	int num, count = 0;
	printf("Enter Number to Check: \n");
	scanf("%d", &num);
	for(int i =1; i<=num; i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	   printf("%d is Prime!\n", num);
	else
	   printf("%d is Not Prime!\n", num);
	   
	return (count==2);
}

// Even Or Odd Check
int evenodd()
{
	int n;
	printf("Enter Number to check for Even or Odd: \n");
	scanf("%d", &n);
	if(n%2==0)
	  printf("%d is Even!\n", n);
	else
	  printf("%d is odd!\n", n);
	  
	return n;
}

// To Exit
void end()
{
	exit(0);
}
