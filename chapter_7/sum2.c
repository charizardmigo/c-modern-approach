//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS A SERIES OF DOUBLE VALUES
//DATE: 6TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double n, v;

    printf("Enter numbers to add (separated with spaces and terminate with 0) : ");
    scanf("%lf", &n);

    do {
        scanf("%lf", &v);
        n += v;

    } while (v != 0);

    printf("\nResult = %lf", n);

    return 0;
}
