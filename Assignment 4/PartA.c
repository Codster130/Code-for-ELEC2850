#include <stdio.h>

float voltageDrop(float R, float I); // returns float of voltage frop

float voltageDrop(float R, float I)
{
    return R * I;
}

int main()
{
    float resVal[5];
    float voltage[5];
    float powerSupply = 0;
    float current = 0;
    float totalResistance = 0;
    printf("Enter the voltage supplied: ");
    scanf("%f", &powerSupply);
    printf("Enter the resistance values in ohms:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d)", i + 1);
        scanf("%f", &resVal[i]);
    }
    totalResistance = resVal[0] + resVal[1] + resVal[2] + resVal[3] + resVal[4];
    current = powerSupply / totalResistance;
    printf("The voltage drop per resistor is:\n");
    for (int i = 0; i < 5; i++)
    {
        voltage[i] = voltageDrop(resVal[i], current);
        printf("%d) %.2f V\n", i + 1, voltage[i]);
    }

    return 0;
}