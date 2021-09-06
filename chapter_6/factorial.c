//NAME: PRIESTLEY FOMECHE
//AIM: APPROXIMATES e BY COMPUTING THE VALUE OF FACTORIALS
//DATE: 4TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n, x, y, xfact, result, ans;
    float e = 0.00f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
            result = 1;
        for (y = 0; y > -(x); y--){
            xfact = x + (y);

            result *= xfact;
            ans = result;
        }
     e += (1 / ans);
    }

    printf("e = %.2f\n", e);

    return 0;
}
