#include <stdio.h>

void main()
{
    int nmr1, nmr2, total; //input variable

    printf("insira um 1 numero: ");//inside values to number 1
    scanf("%d", &nmr1);//read values to number 1

    printf("insira um 2 numero: ");//inside values to number 1
    scanf("%d", &nmr2);//read values to number 2

    total=(nmr1*nmr1)+(nmr2*nmr2);//calculated to see if the number 1 square is somated with the number 2 square
    printf("A soma eh: %d", total);//printed total value

    return 0;
}
