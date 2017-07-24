/*Modifique el porograma que escribio en el ejercicio 3.33 de manera que despliegue el perimetro del cuadrado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j;

    printf("Ingrese una medida del cuadrado: ");
    scanf("%d",&num);

    system("cls");

    for(i=0; i<num; i++)
    {
        if(i==0 || i==num-1)
        {
            for(j=0; j<num; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=0; j<num; j++)
            {
                if(j==0 || j==num-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
