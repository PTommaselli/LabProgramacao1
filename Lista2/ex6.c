#include <stdio.h>

void main()
{
    int nmr, divide;

    printf("insira o ano: ");
    scanf("%d", &nmr);

    divide=nmr%3;

    if(divide==0){
        printf("EH ANO BISSEXTO");
    }else{
        printf("NAO EH ANO BISSEXTO");
    }
}
