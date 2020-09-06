
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cien[15];
    char diez[20];
    char uno[10];
    char y='y';
    int x1, x2, x3=0, x;
    printf("Introduzca un numero de tres dijitos en palabras\n");
    printf("Ejemplo: doscientos veinticinco\n\n");
    scanf("%s",&cien);
    if (strcmp(cien, "cien") == 0){
        printf("100\n");
    }else{
        scanf("%s", &diez);
        
    
    if (strcmp(cien, "ciento") == 0)
        x1=100;
    if (strcmp(cien, "doscientos") == 0)
        x1=200;
    if (strcmp(cien, "trescientos") == 0)
        x1=300;
    if (strcmp(cien, "cuatrocientos") == 0)
        x1=400;
    if (strcmp(cien, "quinientos") == 0)
        x1=500;
    if (strcmp(cien, "seiscientos") == 0)
        x1=600;
    if (strcmp(cien, "sietecientos") == 0)
        x1=700;
    if (strcmp(cien, "ochocientos") == 0)
        x1=800;
    if (strcmp(cien, "nuevecientos") == 0)
        x1=900;
    
    
    if (strcmp(diez, "uno") == 0)
        x2=1;
    if (strcmp(diez, "dos") == 0)
        x2=2;
    if (strcmp(diez, "tres") == 0)
        x2=3;
    if (strcmp(diez, "cuatro") == 0)
        x2=4;
    if (strcmp(diez, "cinco") == 0)
        x2=5;
    if (strcmp(diez, "seis") == 0)
        x2=6;
    if (strcmp(diez, "siete") == 0)
        x2=7;
    if (strcmp(diez, "ocho") == 0)
        x2=8;
    if (strcmp(diez, "nueve") == 0)
        x2=9;
    if (strcmp(diez, "diez") == 0)
        x2=10;
    if (strcmp(diez, "once") == 0)
        x2=11;
    if (strcmp(diez, "doce") == 0)
        x2=12;
    if (strcmp(diez, "trece") == 0)
        x2=13;
    if (strcmp(diez, "catorce") == 0)
        x2=14;
    if (strcmp(diez, "quince") == 0)
        x2=15;
    if (strcmp(diez, "dieciseis") == 0)
        x2=16;
    if (strcmp(diez, "diecisiete") == 0)
        x2=17;
    if (strcmp(diez, "dieciocho") == 0)
        x2=18;
    if (strcmp(diez, "diecinueve") == 0)
        x2=19;
    if (strcmp(diez, "veinte") == 0)
        x2=20;
    if (strcmp(diez, "veintiuno") == 0)
        x2=21;
    if (strcmp(diez, "veintidos") == 0)
        x2=22;
    if (strcmp(diez, "veintitres") == 0)
        x2=23;
    if (strcmp(diez, "veinticuatro") == 0)
        x2=24;
    if (strcmp(diez, "veinticinco") == 0)
        x2=25;
    if (strcmp(diez, "veintiseis") == 0)
        x2=26;
    if (strcmp(diez, "veintisiete") == 0)
        x2=27;
    if (strcmp(diez, "veintiocho") == 0)
        x2=28;
    if (strcmp(diez, "veintinueve") == 0)
        x2=29;
    if (strcmp(diez, "treinta") == 0)
        x2=30;
    if (strcmp(diez, "cuarenta") == 0)
        x2=40;
    if (strcmp(diez, "cincuenta") == 0)
        x2=50;
    if (strcmp(diez, "sesenta") == 0)
        x2=60;
    if (strcmp(diez, "setenta") == 0)
        x2=70;
    if (strcmp(diez, "ochenta") == 0)
        x2=80;
    if (strcmp(diez, "noventa") == 0)
        x2=90;

    
    
    if (x2>=30){
        scanf("%s", &y);
        if (y=='y')
            scanf("%s", &uno);
        if (strcmp(uno, "uno") == 0)
            x3=1;
        if (strcmp(uno, "dos") == 0)
            x3=2;
        if (strcmp(uno, "tres") == 0)
            x3=3;
        if (strcmp(uno, "cuatro") == 0)
            x3=4;
        if (strcmp(uno, "cinco") == 0)
            x3=5;
        if (strcmp(uno, "seis") == 0)
            x3=6;
        if (strcmp(uno, "siete") == 0)
            x3=7;
        if (strcmp(uno, "ocho") == 0)
            x3=8;
        if (strcmp(uno, "nueve") == 0)
            x3=9;
            
    }
    
        
    x=x1+x2+x3;
    printf("\t%d\n",x);
    }
    return 0;
}

