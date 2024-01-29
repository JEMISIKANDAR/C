#include<stdio.h>
struct Vidtape{
	char title[50];
	int lengthinmin;
	float cost;
	float rentalprice;
	char releasedate[10];
};

int main()
{
	struct Vidtape tap1 = {"SImba", 140, 880, 120, "2023-08-16"};
	struct Vidtape tap2 = {"Grey Man", 120, 980, 130, "2023-07-14"};
	struct Vidtape tap3 = {"Social Dilemma", 140, 870, 220, "2022-07-15"};
	
	printf("<--Video Tape 1-->\n");
	printf("Title:         %s\n", tap1.title);
	printf("Length:        %d minutes\n", tap1.lengthinmin);
	printf("Cost:          Rs %.2f\n", tap1.cost);
	printf("Rental Price:  Rs %.2f\n", tap1.rentalprice);
	printf("Release Date:  %s\n\n", tap1.releasedate);
	
	printf("<--Video Tape 2-->\n");
	printf("Title:         %s\n", tap2.title);
	printf("Length:        %d minutes\n", tap2.lengthinmin);
	printf("Cost:          Rs %.2f\n", tap2.cost);
	printf("Rental Price:  Rs %.2f\n", tap2.rentalprice);
	printf("Release Date:  %s\n\n", tap2.releasedate);
	
	printf("<--Video Tape 3-->\n");
	printf("Title:         %s\n", tap3.title);
	printf("Length:        %d minutes\n", tap3.lengthinmin);
	printf("Cost:          Rs %.2f\n", tap3.cost);
	printf("Rental Price:  Rs %.2f\n", tap3.rentalprice);
	printf("Release Date:  %s\n\n", tap3.releasedate);
	
	return 0;
}

