#include <stdio.h>

void main()
{
    float Nota1, Nota2, Nota3, Total;//input variables

    printf("insira o valor da Nota 1: ");//inside values to grade 1
    scanf("%f", &Nota1);//read values to grade 1

    printf("insira o valor da Nota 2: ");//inside values to grade 1
    scanf("%f", &Nota2);//read values to grade 1

    printf("insira o valor da Nota 3: ");//inside values to grade 1
    scanf("%f", &Nota3);//read values to grade 1

    Total=((Nota1*2)+(Nota2*3)+(Nota3*5)/10);//calculated total grade
    
    printf("A media final eh: %f", Total);//printed total value

    return 0;
}
