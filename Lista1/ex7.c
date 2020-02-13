#include <stdio.h>

void main()
{
    float Fahrenheit, Celsius;//input variables

    printf("insira a temperatra em Fahrenheit: ");//inside values 
    scanf("%f", &Fahrenheit);//read values 

    Celsius=(Fahrenheit-32)/1.8;//change values in Fahrenheit to Celsius 

    printf("A temperatura em Celsius eh: %f", Celsius);//printed value in Celsius

    return 0;
}
