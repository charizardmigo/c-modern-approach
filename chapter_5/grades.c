//NAME: PRIESTLEY FOMECHE
//AIM: CONVERTS A NUMERICAL GRADE INTO A LETTER GRADE
//DATE: 20th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grade, tens;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    tens = grade / 10;

    if (grade < 0 || grade > 100){
        printf("INVALID INPUT");
        return 0;
    }

    switch (tens){
    case 0: case 1: case 2: case 3: case 4: case 5:
        printf("Letter grade: F");
        break;

    case 6:
        printf("Letter grade: D");
        break;

    case 7:
        printf("Letter grade: C");
        break;

    case 8:
        printf("Letter grade: B");
        break;

    case 9: case 10:
        printf("Letter grade: A");
        break;

    }

    return 0;
}
