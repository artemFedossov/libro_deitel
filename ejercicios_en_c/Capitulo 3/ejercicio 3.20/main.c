/*El interes simple para un prestamo se calcula mediante la formula:
  interes = prestamo * tasa * dias / 365;
  La formula anterior asume que tasa es la tasa de interes anual, y por lo tanto
  incluye la division entre 365 dias. desarolle un programa que introduzca prestamo,
  tasa y dias para varios prestamos, y que calcule y despliegue el interes simple para
  cada prestamo, utilizando la formula anterior.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float interes, tasa, prestamo, dias;

    do{
        printf("Introduzca el monto del prestamo (presione -1 para finalizar): ");
        scanf("%f",&prestamo);

        if(prestamo != -1)
        {
            printf("Introduzca la tasa de interes: ");
            scanf("%f",&tasa);

            printf("Introduzca el periodo del prestamo en dias: ");
            scanf("%f",&dias);

            interes = prestamo * tasa * (dias / 365);

            printf("El monto del interes es: %.3f\n\n",interes);
        }

    }while(prestamo != -1);

    return 0;
}
