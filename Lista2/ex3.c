#include <stdio.h>

void main()
{
    int nmr1, nmr2, module;

    printf("insira o primeiro numero: ");
    scanf("%d", &nmr1);
    printf("insira o segundo numero: ");
    scanf("%d", &nmr2);

    if(nmr1>nmr2){
        printf("%d", nmr1-nmr2);
    }else{
        printf("%d", nmr2-nmr1);
    }
}
