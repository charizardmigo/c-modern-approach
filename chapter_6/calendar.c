//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS A 1-MONTH CALENDAR
//DATE: 1st August, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, daysofweek, startingday;

    printf("Enter number of days in month: ");
    scanf("%d", &daysofweek);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &startingday);
    printf("\n  MON  TUE  WED  THU  FRI  SAT  SUN\n");

    for (num = 1; num <= startingday; num++){
        if (startingday == 2)
            printf("     ");

        else if (startingday == 3)
            printf("          ");

        else if (startingday == 4)
            printf("               ");

        if (startingday == 5)
            printf("                    ");

        else if (startingday == 6)
            printf("                         ");

        else if (startingday == 7)
            printf("                              ");

    for (num = 1; num <= daysofweek; num++){
        printf("%5d", num);
        if ((startingday + num - 1) % 7 == 0)
            printf("\n");
    }
    }
            return 0;
}
