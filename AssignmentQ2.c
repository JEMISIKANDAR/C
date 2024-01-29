#include<stdio.h>
#include<math.h>
int main()
{
	double l1, l2, g1, g2, distance;
	printf("Enter value of latitude (L1) : \n");
	scanf("%lf", &l1);
	printf("Enter value of latitude (L2) : \n");
	scanf("%lf", &l2);
	printf("Enter value of longitude (G1) : \n");
	scanf("%lf", &g1);
	printf("Enter value of longitude (G2) : \n");
	scanf("%lf", &g2);
	l1= l1 * (M_PI /180.0);
	l2 = l2 * (M_PI / 180.0);
	g1 = g1 * (M_PI / 180.0);
	g2 = g2 * (M_PI / 180.0);
	
	
	
	
	
	distance = 3963*acos(sin(l1)* sin(l2) + cos(l1)* cos (l2) * cos ( g2 - g1 ));
    printf("Distance between two cities in nautical miles is: %lf \n", distance);
    return 0;
	
}
