#include <stdio.h>

int main()
{
    float temperature;                                                              // initialize variable temperature for user to input their fluids temperature
    printf("Enter the boiling point of your fluid: ");                              // prompt user to input the boiling point of their fluid
    scanf("%f", &temperature);                                                      // store the boiling point of the fluid in the variable temperature
    if (temperature <= ((100 * 0.05) + 100) && temperature >= (100 - (100 * 0.05))) // if the temperature is within 5% of the boiling point of water
    {
        printf("The fluid is water.\n"); // print to the user that the fluid is water
    }
    else if (temperature <= ((357 * 0.05) + 357) && temperature >= (357 - (357 * 0.05))) // if the temperature is within 5% of the boiling point of mercury
    {
        printf("The fluid is mercury.\n"); // print to the user that the fluid is mercury
    }
    else if (temperature <= ((1187 * 0.05) + 1187) && temperature >= (1187 - (1187 * 0.05))) // if the temperature is within 5% of the boiling point of copper
    {
        printf("The fluid is copper.\n"); // print to the user that the fluid is copper
    }
    else if (temperature <= ((2193 * 0.05) + 2193) && temperature >= (2193 - (2193 * 0.05))) // if the temperature is within 5% of the boiling point of silver
    {
        printf("The fluid is silver.\n"); // print to the user that the fluid is silver
    }
    else if (temperature <= ((2660 * 0.05) + 2660) && temperature >= (2660 - (2660 * 0.05))) // if the temperature is within 5% of the boiling point of gold
    {
        printf("The fluid is gold.\n"); // print to the user that the fluid is gold
    }
    else
    {
        printf("The fluid is unknown.\n"); // if the temperature is not within 5% of any of the boiling points, print to the user that the fluid is unknown
    }
}