/*Escriba un programa que lea un entero y que determine e imprima si es par o impar.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, par, impar;

    printf("Ingrese un numero y determinare si es par o impar: ");
    scanf("%d",&numA);

    if(numA % 2 == 0 && numA != 0)
    {
        printf("\nEl numero es par\n");
    }
    if(numA % 2 != 0)
    {
        printf("\nEl numero es impar\n");
    }
    if(numA == 0)
    {
        printf("\nEl numero ingresado es un 0\n");
    }

    return 0;
}
