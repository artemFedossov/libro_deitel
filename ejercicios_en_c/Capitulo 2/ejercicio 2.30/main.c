/*Escriba un programa que introdusca un numero de cinco digitos, que separe el numero
  en sus digitos individuales y que despliegue los digitos separados entre si mediante
  tres espacios cada uno*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, b, c, d, e;

    printf("Escriba un numero de 5 digitos: ");
    scanf("%d",&num);

    a = num / 10000;
    b = (num % 10000) / 1000;
    c = (num % 1000) / 100;
    d = (num % 100) / 10;
    e = (num % 10) / 1;

    printf("\n%d   %d   %d   %d   %d\n",a,b,c,d,e);

    return 0;
}
