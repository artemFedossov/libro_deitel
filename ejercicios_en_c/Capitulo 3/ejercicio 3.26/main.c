/*Escriba un programa que utilice ciclos para producir la siguiente tabla de valores*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("A\tA+2\tA+4\tA+6\n\n");

    for(i=1; i<6; i++)
    {
        printf("%d\t%d\t%d\t%d\n",i*3,(i*3)+2,(i*3)+4,(i*3)+6);
    }

    return 0;
}
