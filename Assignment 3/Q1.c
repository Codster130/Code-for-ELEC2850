#include <stdio.h>

void PrintFeetInchShort(int numFeet, int numInch);
void PrintPopcornTime(float bagOunces);
float PyramidVolume(float baseLength, float baseWidth, float pyramidHeight); // returns float

void PrintFeetInchShort(int numFeet, int numInch)
{
    printf("%d' %d\"\n", numFeet, numInch);
    return;
}

void PrintPopcornTime(float bagOunces)
{
    if (bagOunces > 10)
    {
        printf("Too large\n");
        printf("Try again: ");
        scanf("%f", &bagOunces);
        PrintPopcornTime(bagOunces);
    }
    else if (bagOunces < 3)
    {
        printf("Too small\n");
        printf("Try again: ");
        scanf("%f", &bagOunces);
        PrintPopcornTime(bagOunces);
    }
    else
    {
        int seconds = 6 * bagOunces;
        printf("%d seconds to cook.\n", seconds);
    }
    return;
}

float PyramidVolume(float baseLength, float baseWidth, float pyramidHeight)
{
    float volume = (baseLength * baseWidth * pyramidHeight) / 3;
    return volume;
}

int main()
{
    int feet, inch = 0;
    float oz = 0;
    float length, width, height = 0;
    printf("Enter feet and inches as num num: ");
    scanf("%d %d", &feet, &inch);
    PrintFeetInchShort(feet, inch);
    printf("Enter oz of popcorn: ");
    scanf("%f", &oz);
    PrintPopcornTime(oz);
    printf("Enter base length, base width, and pyramid height as num num num: ");
    scanf("%f %f %f", &length, &width, &height);
    printf("The volume of the pyramid is: %.2f\n", PyramidVolume(length, width, height));
    return 0;
}