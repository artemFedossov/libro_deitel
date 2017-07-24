/*introducir un numero binario y desplegar su equivalente decimal*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, aux, i, aux2 = 0;

    printf("Introduzca un numero binario para saber su decimal equivalente: ");
    scanf("%d",&num);

    for(i=0; ;i++)
    {
        aux = num % 10;

        if(aux == 1 || aux == 0)
        {
            num = num / 10;
            if(aux == 1)
            {
                if(i==0)
                {
                    aux2 = i+1;
                }
                else
                {
                    aux2 = aux2 + (i*2);
                }
            }
            else
            {
                continue;
            }
        }
        else
        {
            printf("\nERROR: numero incorecto\n");
            break;
        }
    }

    return 0;
}
