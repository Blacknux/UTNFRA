#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero;
    char txt[1024];

    numero=numeros();
    txt=(char)Texto();




    printf("Usted ingreso %d y %s",numero,txt);


    return 0;
}

int numeros()
{
int numero1;
printf("Ingrese un numero\n");
    scanf("%d",&numero1);
    return numero1;

}
int Texto()
{
char text[1024];
printf("Ingrese un Texto\n");
    scanf("%s",text);

return text;
}
