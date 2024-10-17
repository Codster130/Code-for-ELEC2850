#include <stdio.h>  // Standard input-output library
#include <stdlib.h> // Standard library
#include <time.h>   // Library for time functions

// Function to sum 4 floating-point numbers entered by the user
float sum4()
{
    printf("Adding 4 numbers together...\n"); // Inform the user about the operation
    float num, sum = 0;                       // Initialize variables for the current number and the sum
    for (int i = 0; i < 4; i++)               // Loop to get 4 numbers from the user
    {
        printf("Enter number %d: ", i + 1); // Prompt the user to enter a number
        scanf("%f", &num);                  // Read the number entered by the user
        sum += num;                         // Add the number to the sum
    }
    printf("The sum is %.2f\n", sum); // Print the sum of the 4 numbers
    return sum;                       // Return the sum
}

int main()
{
    sum4();   // Call the sum4 function
    return 0; // Return 0 to indicate successful execution
}