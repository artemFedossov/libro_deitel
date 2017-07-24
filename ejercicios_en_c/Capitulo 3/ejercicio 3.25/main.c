/*Escriba un programa que utilice ciclos para imprimir las siguientes tablas de valores*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("N\t10*N\t100*N\t1000*N\n\n");

    for(i=0; i<10; i++)
    {
        printf("%d\t%d\t%d\t%d\n",i+1,(i+1)*10,(i+1)*100,(i+1)*1000);
    }

    return 0;
}
