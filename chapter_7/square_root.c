//NAME: PRIESTLEY FOMECHE
//AIM: CALCULATES THE SQUARE ROOT OF A POSITIVE FLOATING-POINT NUMBER USING NEWTON'S METHOD
//DATE: 13TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x, y = 1.00, sqrt, div, abs;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    computations:

        div = x / y;
        sqrt = (div + y) / 2;
        abs = fabs(y - sqrt);

        if (abs < (0.00001 * y))
            goto answer;

        y = sqrt;

        goto computations;

    answer:

    printf("\nSquare Root: %.5lf", sqrt);

    return 0;
}
