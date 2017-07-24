/*Escriba un progrma que pida al usuario que introduzca dos enteros, que obtenga
  los numeros por parte del usuario, despues que imprima la palabra "Es mas grande".
  si los numeros son iguales, que imprima el mensaje "Estos numeros son iguales".
  Solamente utilice la forma de seleccion simple de la instruccion simple de la
  instruccion if, que aprendio en este capitulo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);

    if(num1 != num2)
    {
        if(num1 > num2)
        {
            printf("\nel numero %d es mas grande que %d\n",num1,num2);
        }
        if(num2 > num1)
        {
            printf("\nel numero %d es mas grande que %d\n",num2,num1);
        }
    }
    if(num1 == num2)
    {
        printf("\nlos numeros son iguales\n");
    }

    return 0;
}
