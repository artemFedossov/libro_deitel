/*Escriba un programa que imprima los nnumeros dek 1 al 4 en la misma linea.
  Escriba el programa utilizando los siguientes metodos
  - mediante una isntruccion printf sin especificadores de conversion
  - mediante una instruccion prontf con cuatro especificadores de conversion
  - mediente cuatro instrucciones printf*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=1; i<5; i++)
    {
        scanf("%d",&i);

        printf("",i);
    }

    return 0;
}
