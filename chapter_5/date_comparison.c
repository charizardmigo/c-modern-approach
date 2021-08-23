//NAME: PRIESTLEY FOMECHE
//AIM: COMPARES TWO DATES FROM USER AND PRINTS THE SMALLEST
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2;

    printf("Enter first date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    switch (month1){
    case 4: case 6: case 7: case 11:
        if (day1 > 30){
            printf("\nFIRST DATE IS INVALID");
        }
        break;

    case 2:
        if (day1 > 29){
            printf("\nFIRST DATE IS INVALID");
        }
        break;

     case 1: case 3: case 5: case 8: case 9: case 10: case 12:
        break;

    default:
        printf("\nFIRST DATE IS INVALID");
        break;
    }

    switch (month2){
    case 4: case 6: case 7: case 11:
        if (day2 > 30){
            printf("\nSECOND DATE IS INVALID");
        }
        break;

    case 2:
        if (day2 > 29){
            printf("\nSECOND DATE IS INVALID");
        }
        break;

    case 1: case 3: case 5: case 8: case 9: case 10: case 12:
        break;

    default:
        printf("\nSECOND DATE IS INVALID");
        break;
    }
    if (month1 || month2 > 12)
        ;

    else if (year1 == year2 && month1 == month2 && day1 == day2)
        printf("\nTHE DATES ARE EQUAL");

    else if (year1 < year2)
        printf("\n%2.2d/%2.2d/%d is earlier than %2.2d/%2.2d/%d", month1, day1, year1, month2, day2, year2);

    else if (year1 == year2 && month1 < month2)
        printf("\n%2.2d/%2.2d/%d is earlier than %2.2d/%2.2d/%d", month1, day1, year1, month2, day2, year2);

    else if (year1 == year2 && month1 == month2 && day1 < day2)
        printf("\n%2.2d/%2.2d/%d is earlier than %2.2d/%2.2d/%d", month1, day1, year1, month2, day2, year2);

    else
        printf("\n%2.2d/%2.2d/%d is earlier than %2.2d/%2.2d/%d", month2, day2, year2, month1, day1, year1);

    return 0;
}
