//NAME: PRIESTLEY FOMECHE
//AIM: COMPUTES THE VOLUME OF A SPHERE
//DATE: 14th JULY, 2021

#include <stdio.h>
#include <stdlib.h>
#define SPHERE_CONSTANT (4.0f/3.0f)
#define PI_VALUE 3.14159265359f

int main(void)
{
    float radius, volume;

    printf("PROGRAM TO COMPUTE THE VOLUME OF A SPHERE\n");
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = SPHERE_CONSTANT * PI_VALUE * (radius * radius * radius);

    printf("The volume is %.2fm^3", volume);

    return 0;
}
