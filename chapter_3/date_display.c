//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO DISPLAY DATE FROM USER IN REVERSE ORDER
//DATE: 15th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dd, mm, yyyy;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("You entered the date %d/%.2d/%.2d", yyyy, mm, dd);

    return 0;
}
