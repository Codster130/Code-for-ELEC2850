#include <stdio.h>

int det2()
{
    int a11, a12, a21, a22, det;
    printf("Enter a11, a12, a21, a22 separated by spaces: ");
    scanf("%d %d %d %d", &a11, &a12, &a21, &a22);
    det = (a11 * a22) - (a21 * a12);
    return det;
}

int det3()
{
    int a11, a12, a13, a21, a22, a23, a31, a32, a33, det;
    printf("Enter a11, a12, a13, a21, a22, a23, a31, a32, a33 separated by spaces: ");
    scanf("%d %d %d %d %d %d %d %d %d", &a11, &a12, &a13, &a21, &a22, &a23, &a31, &a32, &a33);
    det = (a11 * (a22 * a33 - a23 * a32)) - (a12 * (a21 * a33 - a23 * a31)) + (a13 * (a21 * a32 - a22 * a31));
    return det;
}

int main()
{
    int n;
    printf("Enter 3 to solve a 2-by-2 or 3 to solve a 3-by-3: ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("The determinant is %d", det2());
    }
    else if (n == 3)
    {
        printf("The determinant is %d", det3());
    }
    else
    {
        printf("Invalid input. Please enter 2 or 3.");
    }
    return 0;
}