/*Una gran empresa de productos quimicos le paga a sus vendedores mediante un esquema de
  comision. los vendedores reciben $200 semanales mas el 9% de sus ventas totales durante
  la semana. Por ejemplo, un vendedor que vende $5000 de productos quimicos durante la
  semana recibe $200 mas el 9% de $5000, o un total de $650. Desarolle un programa que
  introduzca las ventas totale de cada vendedor durante la ultima semana y que calcule
  y despliegue los ingresos de ese vendedor. Procese las cantidades de un vendedor a la
  vez.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ventas, salario;

    do{
        printf("Introduzca las ventas en pesos (-1 para terminar): ");
        scanf("%f",&ventas);

        if(ventas != -1)
        {
            salario = 200 + (ventas * 0.09);
            printf("El salario es: $ %.2f\n\n",salario);
        }
    }while(ventas != -1);

    return 0;
}
