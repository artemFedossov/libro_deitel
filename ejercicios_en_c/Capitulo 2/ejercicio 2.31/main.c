/*Escriba un programa que calcule los cuadrados y cubos de los numeros de 0 al 10 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cuadrado, cubo;

    printf("Ingrese un numero del 0 al 10: ");
    scanf("%d",&num);

    cuadrado = num * num;
    cubo = cuadrado * num;

    printf("\nNumero\tCuadrado\tCubo\n%d\t%d\t\t%d\n",num,cuadrado,cubo);

    return 0;
}
