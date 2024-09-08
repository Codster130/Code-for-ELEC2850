// Another program in C
#include <stdio.h>
int main()
{
    int myGrade = 0;           // create a variable called myGrade to hold an integer
    printf("Welcome to ELEC2850!\n"); // \n means newline
    printf("Enter the numerical grade you would like to get in this course: ");
    scanf("%d", &myGrade); // accepts a value from keyboard; store it myGrade
    printf("My grade will be %d\n", myGrade);
    return 0;
}