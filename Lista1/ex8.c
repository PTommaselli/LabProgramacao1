#include <stdio.h>

void main()
{
    float Fahrenheit, Celsius;//input variables

    printf("insira a temperatura em Celsius: ");//inside values
    scanf("%f", &Celsius);//read values

    Fahrenheit=(Celsius*1.8)+32;//change values in Celsius to Fahrenheit 

    printf("A temperatura em Fahrenheit eh: %f", Fahrenheit);//printed value in Fahrenheit

    return 0;
}
