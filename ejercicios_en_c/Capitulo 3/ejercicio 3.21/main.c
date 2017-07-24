/*Desarolle un programa que determine el pago btuto de cada uno de los empleados.
  Esta empresa paga "horas completas" por las primeras 40 horas trabajadas por cada
  empleado y paga "hora y media" por todas las horas extras trabajadas despues de las
  40 hs. Usted tiene una lista de los empleados de la empresa,el numero de horas que
  trabajo cada empleado la semana pasasda y el pago por hora de cada empleado. Su
  programa debera introducir esta informacion para cada empleado, y debera determinar
  y desplegar el pago buto por empleado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas, pagos, total, extras;

    do{
        printf("Introduzca el numero de horas laborales (Ingrese -1 para terminar): ");
        scanf("%f",&horas);

        if(horas != -1)
        {
            printf("Introduzca el pago por hora del empleado: ");
            scanf("%f",&pagos);

            if(horas < 41)
            {
                total = horas * pagos;
            }
            if(horas > 40)
            {
                total = 40 * pagos;
                extras = (horas - 40) * 1.5 * pagos;

                total = total + extras;
            }

            printf("El salario es: %.2f\n\n",total);
        }


    }while(horas != -1);

    return 0;
}
