/*Escriba un programa que utilice un ciclo para imprimir los numeros 1 a 10 dentro de la
  misma linea, separados cada uno por tres espacios en blanco.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d   ",i+1);
    }


    return 0;
}
