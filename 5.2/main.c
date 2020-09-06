
#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C,D,E,N,anio;
    printf("Introduzca el año\n");
    scanf("%d", &anio);
    A=anio%19;
    B=anio%4;
    C=anio%7;
    D=(19*A+24)%30;
    E=(2*B+4*C+6*D+5)%7;
    N=22+D+E;
    if(N<=31)
        printf("El dia de pascua es %d de Marzo", N);
    else
        printf("El dia de pascua es %d de Abril", N-31);
    return 0;
}

