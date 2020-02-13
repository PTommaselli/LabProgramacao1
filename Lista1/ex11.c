#include <stdio.h>

void main()
{
    float Hora, Minuto, Segundo, Total;//input values

    printf("insira o valor da Hora: ");//inside values to hour
    scanf("%f", &Hora);;//read values to hour

    printf("insira o valor do Minuto: ");//inside values to minutes
    scanf("%f", &Minuto);//read values to minutes

    printf("insira o valor do Segundo: ");//inside values to seconds
    scanf("%f", &Segundo);//read values to seconds

    Total=((Hora*3600)+(Minuto*60)+Segundo);//calculated how many time they passed since start of the day 

    printf("Se passaram: %f segundos", Total);//printed value in seconds
    
    return 0;
}
