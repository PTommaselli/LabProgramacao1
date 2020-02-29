#include <stdio.h>

void main()
{
    float nmr1, nmr2, module;

    printf("insira o primeiro numero: ");
    scanf("%f", &nmr1);
    printf("insira o segundo numero: ");
    scanf("%f", &nmr2);

    if(nmr1==nmr2){
        printf("n1(%f) eh igual ao n2(%f)", nmr1, nmr2);
    }else{
        printf("n1(%f) nao eh igual ao n2(%f)", nmr1, nmr2);
    }
}
