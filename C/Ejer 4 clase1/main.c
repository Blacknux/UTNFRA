#include <stdio.h>
#include <stdlib.h>

int main()
{   // declaramos variables
    int numero, contp=0, contn=0,cont0=0;


    for (int a = 1;a<=10;a++)
    {
        printf("Ingrese el %d numero \n",a);
        scanf("%d",&numero);
        if(numero<0)
        {
            contn++;
        }
        else
        {
            if (numero==0)
            {
                cont0++;
            }
            else
            {
                contp++;

            }
        }

    }
    printf("\nLa cantidad de numeros positivos es: %d",contp);
    printf("\nLa cantidad de numeros negativos es: %d",contn);
    printf("\nUsted ingreso 0 %d veces ",cont0);
    return 0;
}
