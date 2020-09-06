
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char mes[15];
    int dia, anio;
    int mes2;
    printf("Inroduzca fecha en este orden: dia, mes año\n");
    printf("Ejemplo: 20, Octubre 2020\n");
    scanf("%d, %s %d", &dia, &mes, &anio);
    if (strcmp(mes, "Enero") == 0)
        mes2=1;
    if(strcmp(mes, "Febrero") == 0)
        mes2=2;
    if(strcmp(mes, "Marzo") == 0)
        mes2=3;
    if(strcmp(mes, "Abril") == 0)
        mes2=4;
    if(strcmp(mes, "Mayo") == 0)
        mes2=5;
    if(strcmp(mes, "Junio") == 0)
        mes2=6;
    if(strcmp(mes, "Julio") == 0)
        mes2=7;
    if(strcmp(mes, "Agosto") == 0)
        mes2=8;
    if(strcmp(mes, "Septiembre") == 0)
        mes2=9;
    if(strcmp(mes, "Octubre") == 0)
        mes2=10;
    if(strcmp(mes, "Noviembre") == 0)
        mes2=11;
    if(strcmp(mes, "Diciembre") == 0)
        mes2=12;
    if((mes2>12) || (mes2<=0))
        printf("Tiene algun error al ingresar la fecha\n");
    else
        printf("%d / %d / %d\n", dia, mes2, anio);
    
    return 0;
}

