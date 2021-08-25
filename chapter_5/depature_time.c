//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS DEPATURE AND ARRIVAL TIME FOR FLIGHT WHOSE DEPARTURE TIME IS CLOSEST TO USER'S
//DATE: 19th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute, tot_mins;

    printf("Enter a 24-hour time (hh:mm) : ");
    scanf("%d:%d", &hour, &minute);

    tot_mins = (hour * 60) + minute;

    if (hour > 23 || minute > 59)
        printf("INVALID TIME FORMAT");

    else if (tot_mins < 173)
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM");

    else if (tot_mins < 532)
        printf("Closest departure time is 8:00 AM, arriving at 10:16 AM");

    else if (tot_mins < 631)
        printf("Closest departure time is 9:43 AM, arriving at 11:52 AM");

    else if (tot_mins < 723)
        printf("Closest departure time is 11:19 AM, arriving at 1:31 PM");

    else if (tot_mins < 804)
        printf("Closest departure time is 12:47 PM, arriving at 3:00 PM");

    else if (tot_mins < 893)
        printf("Closest departure time is 2:00 PM, arriving at 4:08 PM");

    else if (tot_mins < 998)
        printf("Closest departure time is 3:45 PM, arriving at 5:55 PM");

    else if (tot_mins < 1043)
        printf("Closest departure time is 7:00 PM, arriving at 9:20 PM");

    else if (tot_mins < 1223)
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM");

    else
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM");

    return 0;

}
