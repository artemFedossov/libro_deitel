/*Desarolle un programa en C que determine si un cliente de una tienda departamental
  excede el limite de credito de su cuenta. Para cada cliente, se dispone de los
  siguientes datos:
  1 - Numero de cuenta
  2 - saldo al inicio del mes
  3 - el total de los creditos aplicados a la cuenta del cliente durante el mes
  4 - el total de los creditos apliados a la cuenta durante el mes
  5 - el limite de credito autorizado
  el programa debe introducir cada uno de estos datos, calcular el nuevo saldo
  (= saldo inicial + cargo - credito) y determinar si el nuevo saldo excede el
  de credito del cliente. para aquellos clientes que excedan el limite de credito
  el programa debe desplegar el numero de cuenta, el limite de credito, el saldo nuevo
  y el mensaje "Limite de credito excedido".*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cuenta;
    float saldoInicial, credito, limite, cargos, nuevoSaldo;

    do
    {
        printf("Introduzca el numero de cuenta (-1 para finalizar): ");
        scanf("%d",&cuenta);

        if(cuenta != -1)
        {
            printf("Introduzca el saldo inicial: ");
            scanf("%f",&saldoInicial);
            printf("Introduzca el total de cargos: ");
            scanf("%f",&cargos);
            printf("Introduzca el total de creditos: ");
            scanf("%f",&credito);
            printf("Introduzca el limite de creditos: \n");
            scanf("%f",&limite);
        }

        nuevoSaldo = saldoInicial + cargos - credito;

        if(nuevoSaldo > limite)
        {
            printf("Cuenta: %d\nLimite de Credito: %.2f\nSaldo: %.2f\nLimite de credito excedido\n\n",cuenta,limite,nuevoSaldo);
        }

    }while(cuenta != -1);

    return 0;
}
