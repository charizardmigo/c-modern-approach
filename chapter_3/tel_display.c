//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS PHONE NUMBER ENTERED BY USER [(XXX) XXX-XXXX] IN THE FORM [XXX.XXX.XXXX]
//DATE: 15th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int area_code, prefix, suffix;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &area_code, &prefix, &suffix);

    printf("You entered %d.%d.%d", area_code, prefix, suffix);

    return 0;
}
