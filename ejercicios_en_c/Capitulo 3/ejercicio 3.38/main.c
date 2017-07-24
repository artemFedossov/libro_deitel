/*Escriba un programa que despligue 100 asteriscos, uno a la vez. despues de cada 10
  asteriscos, el programa debe desplegar un caracter de nueva linea*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, contador = 0;

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
