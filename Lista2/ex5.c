#include <stdio.h>

void main()
{
    int nmr, divide;

    printf("insira o numero: ");
    scanf("%d", &nmr);

    divide=nmr%3;

    if(divide==0){
        printf("EH DIVISIVEL POR 3");
    }else{
        printf("NAO EH DIVISIVEL POR 3");
    }
}
