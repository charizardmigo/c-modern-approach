//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS THE 12-HOUR TIME FORMAT EQUIVALENT OF A 24-HOUR TIME FORMAT ENTERED BY USER
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 23 || minute > 59)
        printf("INVALID TIME FORMAT");

    else if (hour == 0)
        printf("Equivalent 12-hour time: 12:%.2d AM", minute);

    else if (hour == 12)
        printf("Equivalent 12-hour time: 12:%.2d PM", minute);

    else if ((hour - 12) != 0)
        printf("Equivalent 12-hour time: %.2d:%.2d PM", (hour - 12), minute);

    else
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, minute);

    return 0;
}


    //BELOW IS AN ALTERNATIVE APPROACH TO SOLVE PROBLEM

/*
    if (hour > 23 || minute > 59)
        printf("INVALID TIME FORMAT");

    else if (hour == 00)
        printf("Equivalent 12-hour time: 12:%.2d AM", minute);

    else if (hour == 12)
        printf("Equivalent 12-hour time: 12:%.2d PM", minute);

    else if (hour == 13)
        printf("Equivalent 12-hour time: 1:%.2d PM", minute);

    else if (hour == 14)
        printf("Equivalent 12-hour time: 2:%.2d PM", minute);

    else if (hour == 15)
        printf("Equivalent 12-hour time: 3:%.2d PM", minute);

    else if (hour == 16)
        printf("Equivalent 12-hour time: 4:%.2d PM", minute);

    else if (hour == 17)
        printf("Equivalent 12-hour time: 5:%.2d PM", minute);

    else if (hour == 18)
        printf("Equivalent 12-hour time: 6:%.2d PM", minute);

    else if (hour == 19)
        printf("Equivalent 12-hour time: 7:%.2d PM", minute);

    else if (hour == 20)
        printf("Equivalent 12-hour time: 8:%.2d PM", minute);

    else if (hour == 21)
        printf("Equivalent 12-hour time: 9:%.2d PM", minute);

    else if (hour == 22)
        printf("Equivalent 12-hour time: 10:%.2d PM", minute);

    else if (hour == 23)
        printf("Equivalent 12-hour time: 11:%.2d PM", minute);

    else
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, minute);
*/
