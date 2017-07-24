/*Escriba un programa que lea el radio de un circulo float, y que calcule y despliegue
  el diametro, la circunferencia y el area. utilice el valor 3.14159 para pi */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    float radio, diametro, circunferencia, area;

    printf("Ingrese el radio de un circulo: ");
    scanf("%f",&radio);

    diametro = radio * 2;
    circunferencia = diametro * PI;
    area = PI * (radio * radio);

    printf("\nDiametro: %.2f\nCircunferencia: %.2f\nArea: %.2f\n",diametro,circunferencia,area);


    return 0;
}
