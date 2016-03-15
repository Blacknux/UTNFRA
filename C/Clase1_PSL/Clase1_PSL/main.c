#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;

	printf("\nIngrese 1 numero: ");
	scanf("%d",&a);
	while (a==0)
	{
        printf("\nEl numero debe ser distinto de 0: ");
        scanf("%d",&a);

	}
	printf("\nIngrese 2 numero: ");
	scanf("%d",&b);
	while (b==0)
	{
        printf("\nEl numero debe ser distinto de 0: ");
        scanf("%d",&b);

	}

	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	else if(resultado==0)
	{
        printf("\nAmbos numeros son iguales por lo que el resultado es cero \n");
	}
	else
	{
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
