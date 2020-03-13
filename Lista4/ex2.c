#include <stdio.h>

void main()
{
    int cargo;
    float salario, total;

    printf("Qual o codigo do cargo? ");
    scanf("%d", &cargo);
    printf("Qual o salario do cargo? ");
    scanf("%f", &salario);


    switch(cargo)
    {
    case 101:
        printf("Salario Total: %.2f", salario+(salario*0.10));
        break;
    case 102:
        printf("Salario Total: %.2f", salario+(salario*0.20));
        break;
    case 103:
        printf("Salario Total: %.2f", salario+(salario*0.30));
        break;
    default:
       printf("Salario Total: %.2f", salario+(salario*0.40));
    }

}

