#include<stdio.h>
#include<math.h>
int main()
{
	float l1, l2, g1, g2, distance;
	      // Getting input from user
	printf("Enter Value of latitude (L1): \n");
	scanf("%f", &l1);
	printf("Enter Value of latitude (L2): \n");
	scanf("%f", &l2);
	printf("Enter Value of longitude (G1): \n");
	scanf("%f", &g1);
	printf("Enter Value of longitude (G2): \n");
	scanf("%f", &g2);
	      // Formula
	distance= 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
	 // Display the result in nautical miles
    printf("Distance in nautical miles: %f\n", distance);
    
    return 0;
	
}
