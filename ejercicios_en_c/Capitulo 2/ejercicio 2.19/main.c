/*Escriba un programa que intruzca tres diferentes enteros desde el teclado,
  despues que imprima la suma, el promedio, el producto, el numero mas pequeño
  y el mas grande de estos. solamente utilice la forma de seleccion simple de la
  instruccion if, que aprendio en este capitulo*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, suma, producto;
    float promedio;
    int maximo, minimo;

    printf("Ingrese tres numeros: ");
    scanf("%d%d%d", &num1,&num2,&num3);

    suma = num1 + num2 + num3;
    producto = num1 * num2 * num3;
    promedio = (float)suma / 3;

    maximo = num1;
    minimo = num1;

    if(num1 > maximo)
    {
        maximo = num1;
    }
    if(num2 > maximo)
    {
        maximo = num2;
    }
    if(num3 > maximo)
    {
        maximo = num3;
    }


    if(num1 < minimo)
    {
        minimo = num1;
    }
    if(num2 < minimo)
    {
        minimo = num2;
    }
    if(num3 < minimo)
    {
        minimo = num3;
    }

    printf("La suma es %d\nEl promedio es %.3f\nEl producto es %d\nEl numero mas pequeño es %d\nEl numero mas grande es %d\n",suma,promedio,producto,minimo,maximo);

    return 0;
}
