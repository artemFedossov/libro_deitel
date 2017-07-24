/*Escriba un programa de multiplos de 2, con un ciclo infinito*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;

    for(i=0; ;i++)
    {
        printf("%.f\t",pow(2,i));
    }

    return 0;
}
