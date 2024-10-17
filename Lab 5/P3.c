#include <stdio.h>  // Standard input/output library
#include <stdlib.h> // Standard library for functions like rand()
#include <time.h>   // Library for time functions

// Function to generate and sum 4 random integers
int sum4()
{
    printf("Adding 4 numbers together...\n"); // Inform the user about the operation
    int num, sum = 0; // Initialize variables for the current number and the sum
    for (int i = 0; i < 4; i++) // Loop to generate and sum 4 random numbers
    {
        num = 1 + (int)rand() % 100; // Generate a random number between 1 and 100
        sum += num; // Add the random number to the sum
        printf("Random number %d: %d\n", i+1, num); // Print the generated random number
    }
    return sum; // Return the sum of the 4 random numbers
}

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time
    int ans = sum4(); // Call the sum4 function and store the result in ans
    printf("The sum is %d\n", ans); // Print the sum of the 4 random numbers
    return 0; // Return 0 to indicate successful execution
}