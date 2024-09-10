#include <stdio.h>

void main()
{
    int phones = 100;                                                                  // Start with 100 phones
    int addedPhones = 10;                                                              // add ten more phones
    int lines = (phones * (phones - 1)) / 2;                                           // Calculate the number of lines needed for 100 phones
    int linesNeededFuture = ((phones + addedPhones) * (phones + addedPhones - 1)) / 2; // Calculate the number of lines needed for 100 phones + addedPhones
    int linesNeeded = linesNeededFuture - lines;                                       // Calculate the additional lines needed
    printf("The number of lines needed for %d telephones is %d with %d additional lines needed for %d more telephones.",
           phones, lines, linesNeeded, addedPhones); // Print the number of lines needed for 100 phones and the additional lines needed for more phones
}