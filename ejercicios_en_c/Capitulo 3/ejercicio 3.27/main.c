/*Encuntre los dos valores mas grandes de los 10 numeros*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, max, max2;

    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&num);

        if(i == 0)
        {
            max = num;
            max2 = num;
        }
        if(num <= max && num >= max2)
        {
            max2 = num;
        }
        if(num > max)
        {
            if(max > max2)
            {
               max2 = max;
            }

            max = num;
        }
    }

    printf("\nLos dos numeros maximos son el %d y %d\n",max,max2);

    return 0;
}
