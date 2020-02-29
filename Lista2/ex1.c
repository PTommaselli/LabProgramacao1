#include <stdio.h>

void main()
{
    int nmr, module;

    printf("insira o numero: ");
    scanf("%d", &nmr);

    module=nmr%2;

    if(module==0){
        printf("PAR");
    }else{
        printf("IMPAR");
    }
}
