
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,d;
    printf("Introduzca 4 numeros del 0 al 9\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Su numero es %d%d%d%d\n",a,b,c,d);
    if(d>5)
        c++;
    if(c>5)
        b++;
    d=0;
    c=0;
    a=a*1000;
    b=b*100;
    a=a+b;
    printf("Ya redondeado es %d\n", a);
    return 0;
}

