#include <stdio.h>  // Standard input-output library
#include <stdlib.h> // Standard library for functions like rand()
#include <time.h>   // Library for time functions

// Function prototype for generating a multiplication problem
int generateProblem(); // returns answer

// Function to generate a multiplication problem and return the answer
int generateProblem()
{
    int num1, num2 = 0; // Initialize two integers
    num1 = 1 + (int)rand() % 10; // Generate a random number between 1 and 10
    num2 = 1 + (int)rand() % 10; // Generate another random number between 1 and 10
    printf("How much is %d * %d? \n", num1, num2); // Print the multiplication problem
    return num1 * num2; // Return the product of the two numbers
}

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time
    while (1) // Infinite loop to keep generating problems
    {
        int ans = generateProblem(); // Generate a multiplication problem and get the correct answer
        int userAns = 0; // Initialize the user's answer
        printf("Enter a response (-1 to stop): "); // Prompt the user for an answer
        scanf("%d", &userAns); // Read the user's answer
        if (userAns == ans) // Check if the user's answer is correct
        {
            printf("Correct!\n"); // Inform the user that the answer is correct
        }
        while (userAns != ans) // Loop until the user provides the correct answer
        {
            if (userAns == -1) // Check if the user wants to stop
            {
                break; // Exit the inner loop
            }
            printf("No please try again. "); // Inform the user that the answer is incorrect
            scanf("%d", &userAns); // Read the user's new answer
            if (userAns == ans) // Check if the new answer is correct
            {
                printf("Correct!\n"); // Inform the user that the answer is correct
            }
        }
        if (userAns == -1) // Check if the user wants to stop
        {
            break; // Exit the outer loop
        }
    }
    printf("That's all for now\n"); // Inform the user that the program is ending
    return 0; // Return 0 to indicate successful execution
}