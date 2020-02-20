    #include <stdio.h>

void main()
{
    float salario_atual, salario_ano1, salario_ano2, salario_ano3;//declaracao das variaveis

    printf("insira o valor do salario: ");//recebe o valor do salario
    scanf("%f", &salario_atual);//aloca o valor na variavel

    salario_ano1=(salario_atual*0.07)+salario_atual;//com o salario atual, calcula a promocao de 7% e soma com o salario
    salario_ano2=(salario_ano1*0.06)+salario_ano1;//com o salario do ano 1, calcula a promocao de 6% e soma com o salario do ano 1
    salario_ano3=(salario_ano2*0.05)+salario_ano2;//com o salario do ano 2, calcula a promocao de 5%  e soma com o salario do ano 2

    printf("O salariod o ano 1 eh: R$%.2f\n O salario do ano 2 eh: R$%.2f\nO salario do ano 3 eh: R$%.2f", salario_ano1, salario_ano2, salario_ano3);
    // imprime o valor dos 3 salario de cada um dos ano 3 anos
}

