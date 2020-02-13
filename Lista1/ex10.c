#include <stdio.h>

void main()
{
    float Conta, Total;//input vaiables

    printf("insira o valor da Conta: ");//inside values to account
    scanf("%f", &Conta);;//read values to account

    Total=(Conta*0.10)+Conta;//calculated the account value plus waiter's tip

    printf("O Total eh: %f", Total);//printed total value

    return 0;
}
