//NAME: PRIESTLEY FOMECHE
//AIM: TAKES NUMBERS 1 TO 16 FROM USER IN ANY ORDER AND DISPLAYS THEM IN A 4 BY 4 ARRANGEMENT
//DATE: 15th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter numbers from 1 to 16 in any order (separate them with spaces): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen); //Displays the numbers in a 4 by 4 arrangement

    int row1, row2, row3, row4, column1, column2, column3, column4, diagonal1, diagonal2;

    row1 = one + two + three + four; //Adds all numbers in first row
    row2 = five + six + seven + eight; //Adds all numbers in second row
    row3 = nine + ten + eleven + twelve; //Adds all numbers in third row
    row4 = thirteen + fourteen + fifteen + sixteen; //Adds all numbers in fourth row

    column1 = one + five + nine + thirteen; //Adds all numbers in first column
    column2 = two + six + ten + fourteen; //Adds all numbers in second column
    column3 = three + seven + eleven + fifteen; //Adds all numbers in third column
    column4 = four + eight + twelve + sixteen; //Adds all numbers in fourth column

    diagonal1 = one + six + eleven + sixteen; //Adds all numbers in first diagonal
    diagonal2 = four + seven + ten + thirteen; //Adds all numbers in second diagonal

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

    return 0;
}
