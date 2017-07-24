/*Escribit un programa que lea tres valores de tipo float diferentes de cero y que
  determine si estos pueden representar los lados de un triangulo recto*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float num[3];

    printf("A tener en cuenta que el primer numero ingresado sera la hipotenusa\n\n");

    for(i=0; i<3; i++)
    {
        printf("Ingrese el %der numero para determinar si forma un triangulo recto: ",i+1);
        scanf("%f",&num[i]);

        while(num[i] < 1)
        {
            printf("ERROR: reingrese un numero mayor a cero: ");
            scanf("%f",&num[i]);
        }
    }

    if(num[0]*num[0] == (num[1] * num[1]) + (num[2] * num[2]))
    {
        printf("\nLos lados forman un triangulo rectangulo\n");
    }
    else
    {
        printf("\nLos lados no forman un triangulo rectangulo\n");
    }


    return 0;
}
