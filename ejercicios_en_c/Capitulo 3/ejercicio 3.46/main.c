/*Una empresa quiere trasmitir datos mediante la linea telefonica, pero les preocupa
  que sus telefonos pudieran estar intervenidos. todos sus datos se trasmiten como
  enteros de cuatro digitos. a usted le pidieron que escriba un programa que encripte
  sus datos de manera que se trasmitan de forma mas segura. el programa debe leer un
  entero de cuatro digitos y encriptar la informacion de a siguiente manera: reemplace
  cada digito con el residuo de la division entre 10 de la suma de dicho digito mas 7
  luego despliegue el entero encriptado. Escriba un programa por separado que
  introduzca un entero encriptado de cuatro digitos y los desencripte para formar el
  numero original*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, aux, a, b, c, d;

    do
    {
        if(num != 0)
        {
            printf("Ingrese los 4 digitos: ");
            scanf("%d",&num);

            while(num < 1000)
            {
                printf("ERROR: Ingrese los 4 digitos: ");
                scanf("%d",&num);
            }

            aux = num / 1000;
            a = aux;
            num = num % 1000;

            aux = num / 100;
            b = aux;
            num = num % 100;

            aux = num / 10;
            c = aux;
            num = num % 10;

            aux = num / 1;
            d = aux;
            num = num % 1;
        }
        else
        {
            printf("ERROR: Ingrese los 4 digitos: ");
            scanf("%d",&num);

            while(num < 1000)
            {
                printf("ERROR: Ingrese los 4 digitos: ");
                scanf("%d",&num);
            }

        }

    }while(num != 0);



    return 0;
}
