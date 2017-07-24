/*Los conductores estan preocupados por el kilometraje obtenido en sus automiviles.
  un conductor mantiene el registro de muchos llenados de gasolinate mediante el
  registro de miles de kilometros conduciendo y los litros empleados durante cada
  llenado del tanque. El programa debe calcular y desplegar los kilometros por litro
  obtenidos durante cada llnado de tanque. Despues de procesar toda la informacion,
  el programa debe calcular y desplegar los kilometros por litro combinados de todos
  los llenados del tanque*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gasolina, kilometros, total, totalGral, acumuladorGas = 0, acumuladorKms = 0;

    do{

        printf("Introduzca los litros utilizados (para terminar introduzca -1): ");
        scanf("%f",&gasolina);

            if(gasolina != -1)
            {
                acumuladorGas = acumuladorGas + gasolina;

                printf("Introduzca los Kilometros conducidos: ");
                scanf("%f",&kilometros);

                acumuladorKms = acumuladorKms + kilometros;

                total = kilometros / gasolina;

                printf("Los kilometros por litro de este tanque fueron %.3f\n\n",total);
            }

    }while(gasolina != -1);

    totalGral = acumuladorKms / acumuladorGas;


    printf("\nEl promedio general de kilometros/litros fue %.3f\n\n",totalGral);

    return 0;
}
