#include <stdio.h>
#include <math.h>

void main()
{
	float m, n = 0;																					// declare all variables needed to store input
	printf("Enter two integers, where the first number is the larger side, in format num1 num2: "); // prompt user for input
	scanf("%f %f", &m, &n);																			// collect num1 in m and num2 in n
	m = abs(m);																						// convert m to positive
	n = abs(n);																						// convert n to positive
	if (m <= n)																						// check if m is less than or equal to n
	{
		printf("The first number is not the larger side. Please try again.\n"); // print error message and restart the program when m < n
		main();
	}
	else
	{
		float side1 = pow(m, 2) - pow(n, 2);										   // calculate the first side of the triangle
		float side2 = 2 * m * n;													   // calculate the second side of the triangle
		float hypotenuse = pow(m, 2) + pow(n, 2);									   // calculate the hypotenuse of the triangle
		printf("The sides of the triangle are: %f, %f, %f", side1, side2, hypotenuse); // print the sides of the triangle
	}
}