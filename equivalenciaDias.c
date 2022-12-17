#include<stdio.h>
void main()
{
float  segundos, minutos, dias, horas ,semanas,years;

printf("Proporciname la cantidad de segundos\t\t");
scanf("%f",&segundos);


if (segundos>=86400)
dias= segundos/86400;
printf("Los dias son %.2f  \n",dias);



}