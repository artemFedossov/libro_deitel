/*Hacer un programa que reconzca numeros capicuas de 5 digitos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, b, c, d, e, i;

    printf("Ingrese un numero de 5 digitos: ");
    scanf("%d",&num);

    while(num < 10000 || num > 99999)
    {
        printf("ERROR: reingrese: ");
        scanf("%d",&num);
    }

    a = num / 10000;
    num = num % 10000;
    b = num / 1000;
    num = num % 1000;
    c = num / 100;
    num = num % 100;
    d = num / 10;
    num = num % 10;
    e = num;

    if(a == e && b == d)
    {
        printf("\nEl numero es capicua\n");
    }
    else
    {
        printf("\nEl numero no es capicua\n");
    }

    return 0;
}
