/*
*Ejercicio de la clase numero 3
* @autor Nahuel Claret ++
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi=3.1416;

int ingreso_numero();
float radio();
int main()
{
    float varnum;

    varnum=(radio(ingreso_numero()));
    printf("El area del circulo es: %.2f",(float)varnum);


    return 0;
}


/*
*
* @return numero como entero
*/
int ingreso_numero()
{
    int numero;
    printf("Ingrese el radio del circulo\n");
    scanf("%d",&numero);
    return numero;

}

/*
*
*/
float radio(int x)
{
   float area;
   area=(float)((x*x)*pi);

    return area;


}
