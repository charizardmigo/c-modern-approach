//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS WIND FORCE BASED ON WIND SPEED IN KNOTS
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("The weather is Calm!");

    else if (speed < 4)
        printf("There is light air!");

    else if (speed < 28)
        printf("There is breeze!");

    else if (speed < 48)
        printf("The weather is gale!");

    else if (speed < 64)
        printf("There is a storm!");

    else
        printf("There is hurricane!");

    return 0;
}
