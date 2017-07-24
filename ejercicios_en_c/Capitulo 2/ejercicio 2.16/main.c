/* Ecriba un prgrama que pida al usuario escribir dos numeros,
   que obtenga los dos numeros por parte del usuario,
   y que imprima la suma, el producto, la diferencia,
   el cociente y residuo de los numeros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, suma, producto, diferencia;
    float cociente, residuo;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);

    suma = num1 + num2;
    producto = num1 * num2;
    diferencia = num1 - num2;
    cociente = (float)num1 / num2;
    residuo = cociente - (int)cociente;

    printf("\nLa suma es %d\nEl producto es %d\nLa diferencia es %d\nEl cociente es %.3f\nEl residuo es %.3f",suma,producto,diferencia,cociente,residuo);



    return 0;
}
