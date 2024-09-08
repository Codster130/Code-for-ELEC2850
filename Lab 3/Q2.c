#include <stdio.h>
#include <math.h>

int main()
{
    char input;
    float number1, number2, ans;
    printf("For absolute value of a number, press 'a'.\n \
            For maximum of two numbers, press 'm'.\n \
            For minimum of two numbers, press 'n'.\n \
            For sum of two numbers, press 's'.\n \
            For difference of two numbers, press 'd'.\n \
            For square of a number, press 'q'.\n \
            Enter your choice: ");
    scanf("%c", &input);

    switch (input)
    {
    case 'a':
        printf("Enter a number: ");
        scanf("%f", &number1);
        ans = abs(number1);
        printf("The absolute value of the number is %.2f\n", ans);
        break;
    case 'm':
        printf("Enter your first number: ");
        scanf("%f", &number1);
        printf("Enter your second number: ");
        scanf("%f", &number2);
        ans = fmax(number1, number2);
        printf("The maximum of your two numbers is %.2f\n", ans);
        break;
    case 'n':
        printf("Enter your first number: ");
        scanf("%f", &number1);
        printf("Enter your second number: ");
        scanf("%f", &number2);
        ans = fmin(number1, number2);
        printf("The minimum of your two numbers is %.2f\n", ans);
        break;
    case 's':
        printf("Enter your first number: ");
        scanf("%f", &number1);
        printf("Enter your second number: ");
        scanf("%f", &number2);
        ans = number1 + number2;
        printf("The sum of your two numbers is %.2f\n", ans);
        break;
    case 'd':
        printf("Enter the number to be subtracted from: ");
        scanf("%f", &number1);
        printf("Enter the amount to be subtracted: ");
        scanf("%f", &number2);
        ans = number1 - number2;
        printf("The difference of your two numbers is %.2f\n", ans);
        break;
    case 'q':
        printf("Enter your number: ");
        scanf("%f", &number1);
        ans = pow(number1, 2);
        printf("The square of your number is %.2f\n", ans);
        break;
    default:
        printf("Invalid input (Must be lowercase letter)\n");
        break;
    }
}