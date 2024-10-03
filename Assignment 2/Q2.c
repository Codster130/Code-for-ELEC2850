#include <stdio.h>

int main()
{
    int change = 0;
    printf("Enter the amount of change in cents: ");
    scanf("%d", &change);

    if (change < 0)
    {
        printf("Invalid amount\n");
    }
    else if (change == 0)
    {
        printf("No change");
    }
    if (change > 25)
    {
        printf("Number of quarters: %d\n", change / 25);
        change = change % 25;
    }
    if (change >= 10)
    {
        printf("Number of dimes: %d\n", change / 10);
        change = change % 10;
    }
    if (change >= 5)
    {
        printf("Number of nickels: %d\n", change / 5);
        change = change % 5;
    }
    if (change > 0)
    {
        printf("Number of pennies: %d\n", change);
    }
    return 0;
}