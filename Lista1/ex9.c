#include <stdio.h>

void main()
{
    float Raio, Area;//input values

    printf("insira o Raio de uma Circunferencia: ");//inside values to radius
    scanf("%f", &Raio);;//read values to radius

    Area=(Raio*Raio)*3.14;//calculated the area of circle

    printf("A Area eh: %f", Area);//preinted value

    return 0;
}
