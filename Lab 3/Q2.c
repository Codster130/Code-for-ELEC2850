#include <stdio.h>
#include <math.h>

int main()
{
	char input;						 // declare variable for user input to select operation with a lowercase letter
	float number1, number2, ans = 0; // declare variables for all needed variables for each operation
	printf("For absolute value of a number, press 'a'.\n \
            For maximum of two numbers, press 'm'.\n \
            For minimum of two numbers, press 'n'.\n \
            For sum of two numbers, press 's'.\n \
            For difference of two numbers, press 'd'.\n \
            For square of a number, press 'q'.\n \
            Enter your choice: ");	 // prompt user to select which operation they want to perform
	scanf("%c", &input);			 // get users choice of operation

	switch (input) // switch statement to determine which operation to perform based on user input
	{
	case 'a':						// absolute value
		printf("Enter a number: "); // collect number and preform absolute value operation
		scanf("%f", &number1);
		ans = abs(number1);
		printf("The absolute value of the number is %.2f\n", ans); // print the completed operation
		break;
	case 'm':								 // maximum
		printf("Enter your first number: "); // collect two numbers and preform maximum operation
		scanf("%f", &number1);
		printf("Enter your second number: ");
		scanf("%f", &number2);
		ans = fmax(number1, number2);
		printf("The maximum of your two numbers is %.2f\n", ans); // print the completed operation
		break;
	case 'n':								 // minimum
		printf("Enter your first number: "); // collect two numbers and preform minimum operation
		scanf("%f", &number1);
		printf("Enter your second number: ");
		scanf("%f", &number2);
		ans = fmin(number1, number2);
		printf("The minimum of your two numbers is %.2f\n", ans); // print the completed operation
		break;
	case 's':								 // sum
		printf("Enter your first number: "); // collect two numbers and preform sum operation
		scanf("%f", &number1);
		printf("Enter your second number: ");
		scanf("%f", &number2);
		ans = number1 + number2;
		printf("The sum of your two numbers is %.2f\n", ans); // print the completed operation
		break;
	case 'd':												// difference
		printf("Enter the number to be subtracted from: "); // collect two numbers and preform difference operation
		scanf("%f", &number1);
		printf("Enter the amount to be subtracted: ");
		scanf("%f", &number2);
		ans = number1 - number2;
		printf("The difference of your two numbers is %.2f\n", ans); // print the completed operation
		break;
	case 'q':						   // square
		printf("Enter your number: "); // collect number and preform square operation
		scanf("%f", &number1);
		ans = pow(number1, 2);
		printf("The square of your number is %.2f\n", ans); // print the completed operation
		break;
	default:
		printf("Invalid input (Must be lowercase letter)\n"); // print to user that their input was invalid
		break;
	}
	return 0; // quits program nicely
}