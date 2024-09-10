#include <stdio.h>

void main()
{
    float radius = 0;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = 3.14159 * (radius * radius);
    float circumference = 2 * 3.14159 * radius;
    printf("The area of the circle whos radius is %.2f is %.2f, the circumference is %.2f.\n", radius, area, circumference);
}