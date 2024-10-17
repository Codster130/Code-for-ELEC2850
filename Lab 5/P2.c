#include <stdio.h>
#include <stdlib.h> //the rand and srand functions are in here
#include <time.h>   //we want to use current time to generate random
                    //value
void generateRandom();
int main()
{
    srand(time(NULL)); // this uses current time to generate the seed value
    generateRandom();  // call the function to generate random number
    return 0;
}

void generateRandom()
{
    int value; // rand produces a random value that can be large we want to scale
               // it down to between 1 and 100
    value = 1 + (int)rand() % 100;
    printf("The random value is % d\n", value);
}