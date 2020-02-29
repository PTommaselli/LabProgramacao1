#include <stdio.h>

void main()
{
    int idade;

    printf("insira a sua idade: ");
    scanf("%d", &idade);

    if(idade>=18){
        printf("MAIOR DE IDADE");
    }else{
        printf("MENOR DE IDADE");
    }
}
