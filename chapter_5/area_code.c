//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS CITY IN GEORGIA WITH CORRESPONDING AREA CODE
//DATE: 18th JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int area_code;

    printf("Enter an area code: ");
    scanf("%d", &area_code);

    switch (area_code){
        case 229:
            printf("The City name is Albany");
            break;
        case 404: case 470: case 678: case 770:
            printf("The City name is Atlanta");
            break;
        case 478:
            printf("The City name is Macon");
            break;
        case 706: case 762:
            printf("The City name is Columbus");
            break;
        case 912:
            printf("The City name is Savannah");
            break;
        default:
            printf("Area Code not recognized");
    }

    return 0;
}
