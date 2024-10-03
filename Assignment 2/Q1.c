#include <stdio.h>

int main(){
    int hours, minutes = 0;
    printf("Enter your time as HH:MM in 24-hour format: ");
    scanf("%d:%d", &hours, &minutes);
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59){
        printf("Invalid time\n");
    }
    else if (hours < 6){
        printf("Toll at %d:%d is $1.55", hours, minutes);
    }
    else if (hours < 10){
        printf("Toll at %d:%d is $4.65", hours, minutes);
    }
    else if (hours < 18){
        printf("Toll at %d:%d is $2.35", hours, minutes);
    }
    else{
        printf("Toll at %d:%d is $1.55", hours, minutes);
    }
    return 0;
}