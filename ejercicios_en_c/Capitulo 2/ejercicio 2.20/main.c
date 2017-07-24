/*Escriba un programa que lea el radio de un circulo y que imprima el diametro,
  la circunferencia y el area de ese circulo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio, diametro, circunferencia, area;

    printf("Ingrese el radio del circulo: ");
    scanf("%f",&radio);

    diametro = radio * radio;
    circunferencia = diametro * 3.14;
    area = 3.14 * diametro;

    printf("\nEl diamentro es %.3f\nLa circunferencia es %.3f\nEl area es %.3f\n",diametro,circunferencia,area);

    return 0;
}
