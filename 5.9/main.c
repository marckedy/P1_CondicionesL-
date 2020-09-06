
#include <stdio.h>
#include <stdlib.h>

int main() {
    int anio, mes, dia;
    int anio1, mes1, dia1, edad, mes2, mes3, dia2;
    printf("Ingrese su fecha de nacimiento \nen este orden año mes dia\n");
    scanf("%d %d %d", &anio, &mes, &dia);
    printf("Ingrese su fecha de nacimiento \nen este orden año mes dia\n");
    scanf("%d %d %d", &anio1, &mes1, &dia1);
    edad=anio1-anio-1;
    mes2=mes-mes1;
    dia2=dia-dia1;
    
    if(mes2<=0){
        if(mes2<0)
            edad++;
        if(mes2==0){
            if(dia2<=0)
                edad++;
        }   
    }
    printf("Tienes %d años ", edad);
    
    mes2= (anio1*12);
    mes3= (anio*12);
    mes2= mes2-(12-mes1);
    mes3= mes3-(12-mes);
    mes3= mes2-mes3;
    if(mes3<12){
        if (mes3==0){
            printf("con 0 meses y %d dias", dia2*(-1));
        }else printf("con %d meses y %d dias", mes3, dia1);
    } else {
        if(mes3==12){
            dia1= (dia-dia1-31)*(-1);
            printf("con 11 meses y %d dias", dia1);
        }
    }
    
    return 0;
}

