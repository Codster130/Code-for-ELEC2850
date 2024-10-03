#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Invalid number\n");
        return 0;
    }
    printf("Collatz Conjecture sequence is: %d, ", num);
    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            if (num == 1)
            {
                printf("1.\n");
                break;
            }
            printf("%d, ", num);
        }
        else
        {
            num = 3 * num + 1;
            printf("%d, ", num);
        }
    }
    return 0;
}