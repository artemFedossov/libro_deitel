/*Escriba un programa mediante un ciclo while que cuente de 1 a 300000000, cada vez
  que la cuenta alcance un multiplo de 100000000 despliegue dicho numero en la pantalla
  utilice su reloj para determinar la velocidad*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    while(num<=300000000)
    {
        if(num % 100000000 == 0)
        {
            printf("%d\n",num);
        }
        num++;
    }

    return 0;
}
