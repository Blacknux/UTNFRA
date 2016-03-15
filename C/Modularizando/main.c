#include <stdio.h>
#include <stdlib.h>

int sum();
int main()
{
    int cantnum;

    printf("Ingrese la cantidad de numeros a sumar y evaluar\n");
    scanf("%d",&cantnum);

    sum(cantnum);
    return 0;
}

int sum(int cn)
{
    int numero, contp=0, contn=0,cont0=0;


    for (int a = 1;a<=cn;a++)
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
}
