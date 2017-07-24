/*Escriba un programa que lea dos enteros y que determine e imprima si el
  primero es multiplo del segundo*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroA, numeroB;

    printf("Ingrese el primer numero: ");
    scanf("%d",&numeroA);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&numeroB);

    if(numeroA > numeroB)
    {
        if(numeroA % numeroB == 0)
        {
            printf("\nEl numero %d es multiplo de %d\n",numeroA, numeroB);
        }
        else
        {
            printf("\nNo son multiplos\n");
        }
    }
    else
    {
        printf("\nNo son multiplos\n");
    }

    return 0;
}
