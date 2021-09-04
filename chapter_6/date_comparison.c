//NAME: PRIESTLEY FOMECHE
//AIM: COMPARES SEVERAL DATES FROM USER AND PRINTS THE SMALLEST
//DATE: 4TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int day1, month1, year1, month2, day2, year2;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month1, &day1, &year1);


       do {
        printf("Enter a date (mm/dd/yyyy) : ");
        scanf("%d/%d/%d", &month2, &day2, &year2);
        month2 = month2;
        day2 = day2;
        year2 = year2;
       }     while (month2 != 0 && day2 != 0 && year2 != 0);


        if (year1 == year2 && month1 == month2 && day1 == day2)
        printf("\SOME DATES ARE EQUAL");

    else if (year1 < year2)
        printf("\n%2.2d/%2.2d/%d is the earliest date", month1, day1, year1);

    else if (year1 == year2 && month1 < month2)
        printf("\n%2.2d/%2.2d/%d is the earliest date", month1, day1, year1);

    else if (year1 == year2 && month1 == month2 && day1 < day2)
        printf("\n%2.2d/%2.2d/%d is the earliest date", month1, day1, year1);

    else
        printf("\n%2.2d/%2.2d/%d is the earliest date", month2, day2, year2);

    /*if (year == year && month == month && day == day)
        printf("\nTHE DATES ARE EQUAL");

    else if (year < year)
        printf("\n%2.2d/%2.2d/%d is the earliest date", month, day, year);

    else if (year == year && month < month)
        printf("\n%2.2d/%2.2d/%d is the earliest date", month, day, year);

    else if (year == year && month == month && day < day)
        printf("\n%2.2d/%2.2d/%d is the earliest date", month, day, year);

    else
        printf("\n%2.2d/%2.2d/%d is the earliest date", month, day, year);
*/
    return 0;
}
