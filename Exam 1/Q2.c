#include <stdio.h>

int main()
{
    float sec, height, distance, t = 0;

    printf("Enter the time of fall in seconds: ");
    scanf("%f", &sec);

    printf("Enter the height of the bridge in meters: ");
    scanf("%f", &height);

    while (sec < 0)
    {
        printf("Invalid input. Please enter a positive number: ");
        scanf("%f", &sec);
    }

    printf("\n");
    printf("Time Falling (s)  Distance Fallen (m)\n");
    printf("-------------------------------------\n");

    while (t <= sec)
    {
        distance = 0.5 * 9.8 * t * t;
        printf("%8.0f %20.1f\n", t, distance);
        t++;
    }

    printf("\n");

    if (distance > height)
    {
        printf("WARNING: The distance exceeds the height of the bridge\n");
    }

    return 0;
}