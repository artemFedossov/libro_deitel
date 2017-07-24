/*Escriba n programa que lea la medida de uno de los lados de un cuadrado y que despliegue dicho cuadrado con asteriscos. Su programa
  debe trabajar con cuadrados de tamaño entre 1 y 20.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, num;

    printf("Ingrese la medida del cuadrado: ");
    scanf("%d",&num);

    while(num < 1 || num > 20)
    {
        printf("ERROR, ingrese una medida del 1 al 20: ");
        scanf("%d",&num);
    }
    system("cls");

    for(i=0; i<num; i++)
    {

        for(j=0; j<num; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
