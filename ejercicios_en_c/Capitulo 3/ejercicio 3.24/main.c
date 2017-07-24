/*Un programa que determina el ganador de un concurso de unidades vendidas por cada
  vendedor. El vendedor que vende el mayor numero de unidades gana. Escriba un programa
  que introduzca una serie de 10 numeros y determine e imprima el mayor de estos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, max;

    for(i=0; i<10; i++)
    {
        printf("Ingrese las unidades vendidas: ");
        scanf("%d",&num);

        if(i == 0)
        {
            max=num;
        }
        if(num > max)
        {
            max = num;
        }
    }

    printf("\nEl maximo de unidades vendidad es de: %d\n",max);

    return 0;
}
