#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
    float a, b, c;
    float rootOne, rootTwo;
    while (1 == 1)
    {
        printf("Do you want to solve a quadratic? (y/n): ");
        scanf(" %c", &ch);
        printf("%c\n", ch);
        if (ch != 'y')
        {
            break;
        }
        printf("Enter the values of a, b and c: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("%.2f, %.2f, %.2f\n", a, b, c);
        if (a == 0 || ((b * b) - 4 * a * c) < 0)
        {
            printf("The equation is not quadratic\n");
        }
        else
        {
            rootOne = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
            rootTwo = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
            printf("Roots of the equation are: %.2f and %.2f\n", rootOne, rootTwo);
        }
    }
    return 0;
}