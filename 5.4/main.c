#include <stdlib.h>

int main() {
    int horas, minutos, resultado;
    printf("Escribe la hora y minutos (en 24hr)\n Ejemplo 01:10\n");
    scanf("%d:%d",&horas, &minutos);
    if(horas>12){
        horas-=12;
        printf("La hora es: %d:%d pm\n", horas, minutos);
    }else
        printf("La hora es: %d:%d am\n", horas, minutos);
    return 0;
}