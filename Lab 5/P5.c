#include <stdio.h>  // Standard input/output library
#include <stdlib.h> // Standard library for functions like rand()
#include <time.h>   // Library for the time function

// Function prototypes
int generateProblem(); // returns answer
void randomPraise();   // prints a random praise message
void randomWrong();    // prints a random wrong message

// Function to generate a multiplication problem
int generateProblem()
{
    int num1, num2 = 0;                            // Initialize num1 and num2 to 0
    num1 = 1 + (int)rand() % 10;                   // Generate a random number between 1 and 10
    num2 = 1 + (int)rand() % 10;                   // Generate another random number between 1 and 10
    printf("How much is %d * %d? \n", num1, num2); // Print the multiplication problem
    return num1 * num2;                            // Return the answer to the problem
}

// Function to print a random praise message
void randomPraise()
{
    int random = rand() % 4; // Generate a random number between 0 and 3
    switch (random)
    {
    case 0:
        printf("Very Good!\n"); // Print "Very Good!" if random is 1
        break;
    case 1:
        printf("Excellent!\n"); // Print "Excellent!" if random is 2
        break;
    case 2:
        printf("Nice work!\n"); // Print "Nice work!" if random is 3
        break;
    case 3:
        printf("Keep up the good work!\n"); // Print "Keep up the good work!" if random is 4
        break;
    default:
        printf("Very good!\n"); // Default case to print "Very good!", shouldn't be reached
        break;
    }
}

// Function to print a random wrong message
void randomWrong()
{
    int random = rand() % 4;
    switch (random)
    {
    case 0:
        printf("No. Please try again. "); // Print "No. Please try again." if random is 0
        break;
    case 1:
        printf("Wrong. Try once more. "); // Print "Wrong. Try once more." if random is 1
        break;
    case 2:
        printf("Don't give up! "); // Print "Don't give up!" if random is 2
        break;
    case 3:
        printf("No. Keep trying. "); // Print "No. Keep trying." if random is 3
        break;
    default:
        printf("No. Please try again. "); // Default case to print "No. Please try again.", shouldn't be reached
        break;
    }
}

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current system time
    while (1)          // Infinite loop to keep generating problems until user enters -1
    {
        int ans = generateProblem();               // Generate a multiplication problem and store the answer
        int userAns = 0;                           // Initialize userAns to 0
        printf("Enter a response (-1 to stop): "); // Prompt the user to enter an answer
        scanf("%d", &userAns);                     // Read the user's answer
        if (userAns == ans)                        // Check if the user's answer is correct
        {
            randomPraise(); // Print a random praise message
        }
        while (userAns != ans) // Loop until the user enters the correct answer or -1 to stop
        {
            if (userAns == -1)
            {
                break; // Break out of the loop if the user enters -1
            }
            randomWrong();         // Print a random wrong message
            scanf("%d", &userAns); // Read the user's answer again
            if (userAns == ans)    // Check if the user's answer is correct
            {
                randomPraise(); // Print a random praise message
            }
        }
        if (userAns == -1) // Check if the user entered -1 to stop
        {
            break; // Break out of the infinite loop
        }
    }
    printf("That's all for now\n"); // Print a message to indicate the end of the program
    return 0;                       // Return 0 to indicate successful completion of the program
}