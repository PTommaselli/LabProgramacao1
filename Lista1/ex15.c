#include <stdio.h>

void main() 
{
    float SegundosInserido, Segundos, Horas, Minutos;//input variables

    printf("insira os segundos: ");//inside values to seconds
    scanf("%f", &SegundosInserido);//read values to seconds

    Horas=(SegundosInserido/3600);//calculated hours
    Minutos=(Horas - ((int)Horas))*60;//calculated minutes and remove int part of the hour
    Segundos=(Minutos - ((int)Minutos))*60;//calculated seconds and remove int part of the minutes

    printf("%.0fh %0.fm %0.fs", Horas, Minutos, Segundos );//total values

    return 0;
}
