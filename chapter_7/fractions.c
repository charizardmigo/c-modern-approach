//NAME: PRIESTLEY FOMECHE
//AIM: ADDS, SUBTRACTS, MULTIPLIES AND DIVIDES TWO FRACTIONS FROM USER
//DATE: 6TH AUGUST, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, denom1, num2, denom2, num3, denom3;
    char ch;

    printf("Enter two fractions to compute: ");
    scanf("%d/%d", &num1, &denom1);

    do {
       ch = getchar();
       if (ch == ' ')
            continue;

       scanf("%d/%d", &num2, &denom2);

            if (ch == '+'){
                num3 = (num1 * denom2) + (num2 * denom1);
                denom3 = denom1 * denom2;
            }

            else if (ch == '-'){
                num3 = (num1 * denom2) - (num2 * denom1);
                denom3 = denom1 * denom2;
            }

            else if (ch == '*'){
                num3 = num1 * num2;
                denom3 = denom1 * denom2;
            }

            else if (ch == '/'){
                num3 = num1 * denom2;
                denom3 = num2 * denom1;
            }

            else
                printf("INVALID OPERATOR");

        ch = getchar();
    } while (ch != '\n');

    printf("The result is %d/%d", num3, denom3);

    return 0;
}
