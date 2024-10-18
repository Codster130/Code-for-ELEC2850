#include <stdio.h>

float temp_depth_celsius(float depth);
float temp_depth_fahrenheit(float depth);

float temp_depth_celsius(float depth)
{
    float celsius = (10 * depth) + 20;
    return celsius;
}

float temp_depth_fahrenheit(float depth)
{
    float fahrenheit = (1.8 * temp_depth_celsius(depth)) + 32;
    return fahrenheit;
}

int main()
{
    float depth = 0;
    printf("Enter the depth of the water (km): ");
    scanf("%f", &depth);
    printf("The temperature in Celsius is: %.2f\n", temp_depth_celsius(depth));
    printf("The temperature in Fahrenheit is: %.2f\n", temp_depth_fahrenheit(depth));
    return 0;
}