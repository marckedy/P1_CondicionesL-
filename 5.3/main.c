
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    int x;
    printf("Introduzca el codigo para conocer el caracter\n");
    printf("alfabético, díjito, puntuación, especial o no imprimible\n");
    scanf("%d", &x);
    a=x;
    printf("De acuerdo a su código su letra es:\n\t%c",a);
    return 0;
}

