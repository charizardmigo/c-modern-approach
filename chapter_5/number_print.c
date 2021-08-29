//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS THE ENGLISH WORD OF A TWO-DIGIT NUMBER
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, tens, unit;

    printf("Enter a 2-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    unit = num % 10;

    if (num < 10 || num > 99){
        printf("THAT IS NOT A 2-DIGIT NUMBER");
        return 0;
    }

    switch (num){
    case 10:
        printf("You entered the number ten");
        break;

    case 11:
        printf("You entered the number eleven");
        break;

    case 12:
        printf("You entered the number twelve");
        break;

    case 13:
        printf("You entered the number thirteen");
        break;

    case 14:
        printf("You entered the number fourteen");
        break;

    case 15:
        printf("You entered the number fifteen");
        break;

    case 16:
        printf("You entered the number sixteen");
        break;

    case 17:
        printf("You entered the number seventeen");
        break;

    case 18:
        printf("You entered the number eighteen");
        break;

    case 19:
        printf("You entered the number nineteen");
        break;
    }

    switch (tens){
        case 2:
            printf("You entered twenty");
            break;

        case 3:
            printf("You entered thirty");
            break;

        case 4:
            printf("You entered forty");
            break;

        case 5:
            printf("You entered fifty");
            break;

        case 6:
            printf("You entered sixty");
            break;

        case 7:
            printf("You entered seventy");
            break;

        case 8:
            printf("You entered eighty");
            break;

        case 9:
            printf("You entered ninty");
            break;
    }

    switch (unit){
        case 1:
            printf("-one");
            break;

        case 2:
            printf("-two");
            break;

        case 3:
            printf("-three");
            break;

        case 4:
            printf("-four");
            break;

        case 5:
            printf("-five");
            break;

        case 6:
            printf("-six");
            break;

        case 7:
            printf("-seven");
            break;

        case 8:
            printf("-eight");
            break;

        case 9:
            printf("-nine");
            break;
    }

    return 0;

}
