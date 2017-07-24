/*Escriba un programa que lea cinco enteros y que despues imprima el numero mas grande
  y el mas pequeño del grupo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5, maximo, minimo;

    printf("Ingrese cinco numeros separados con un espacio: ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    maximo = num1;
    minimo = num1;

    if(num2 > maximo)
    {
        maximo = num2;
    }
    if(num3 > maximo)
    {
        maximo = num3;
    }
    if(num4 > maximo)
    {
        maximo = num4;
    }
    if(num5 > maximo)
    {
        maximo = num5;
    }
    if(num2 < minimo)
    {
        minimo = num2;
    }
    if(num3 < minimo)
    {
        minimo = num3;
    }
    if(num4 < minimo)
    {
        minimo = num4;
    }
    if(num5 < minimo)
    {
        minimo = num5;
    }

    printf("\nEl numero mas grande es %d\nEl numero mas chico es %d\n",maximo,minimo);

    return 0;
}
