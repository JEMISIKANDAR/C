#include<stdio.h>
struct student{
	 char name[50];
	 int age;
	 char grade;
};
int main()
{
	struct student students[10];
	
	for(int i=0; i<10; ++i){
		printf("(Enter Student %d information)\n", i+1);
		printf("Name: ");
		scanf("%s", students[i].name);
		
		printf("Age: ");
		scanf("%d", &students[i].age);
		
		printf("Grade: ");
		scanf(" %c", &students[i].grade);
		
		printf("\n");
	}
	printf("(Students information)\n");
	for(int j = 0; j<10; j++){
		printf("Student %d:\n", j+1);
		printf("Name: %s\n", students[j].name);
		printf("Age: %d\n", students[j].age);
		printf("Grade: %c\n", students[j].grade);
		printf("\n");
	}
	
	return 0;
}

