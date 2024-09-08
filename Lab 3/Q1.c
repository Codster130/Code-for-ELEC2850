#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter the boiling point of your fluid: ");
    scanf("%f", &temperature);
    if (temperature <= ((100 * 0.05) + 100) && temperature >= (100 - (100 * 0.05)))
    {
        printf("The fluid is water.\n");
    }
    else if (temperature <= ((357 * 0.05) + 357) && temperature >= (357 - (357 * 0.05)))
    {
        printf("The fluid is mercury.\n");
    }
    else if (temperature <= ((1187 * 0.05) + 1187) && temperature >= (1187 - (1187 * 0.05)))
    {
        printf("The fluid is copper.\n");
    }
    else if (temperature <= ((2193 * 0.05) + 2193) && temperature >= (2193 - (2193 * 0.05)))
    {
        printf("The fluid is silver.\n");
    }
    else if (temperature <= ((2660 * 0.05) + 2660) && temperature >= (2660 - (2660 * 0.05)))
    {
        printf("The fluid is gold.\n");
    }
    else
    {
        printf("The fluid is unknown.\n");
    }
}