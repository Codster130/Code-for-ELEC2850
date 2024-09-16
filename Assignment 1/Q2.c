#include <stdio.h>
#include <math.h>

void main()
{
	float x1, y1, x2, y2 = 0;										// Declare all variables needed
	printf("Enter your first coodinate as x1 y1: ");				// prompt user for their first coordinate
	scanf("%f %f", &x1, &y1);										// collect first coordinate in x1 and y1
	printf("Enter your second coodinate as x2 y2: ");				// prompt user for their second coordinate
	scanf("%f %f", &x2, &y2);										// collect second coordinate in x2 and y2
	float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));		// calculate the distance between the two points
	printf("The distance between the two points is: %f", distance); // print the distance between the two points
}