/*Escriba un programa que lea un entero y determine y despliegue cuantos digitos del
  entero son siete*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     long num;
     int i, aux, cont=0;

    printf("Ingrere un numero: ");
    scanf("%d",&num);

    for(i=0; ;i++)
    {
        aux = num % 10;
        num = num / 10;

        if(aux == 7)
        {
            cont++;
            continue;
        }
        else
        {
            if(num == 0)
            {
                break;
            }
        }
    }

    printf("\nLa cantidad de 7 es: %d\n",cont);

    return 0;
}
