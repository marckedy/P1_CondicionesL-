

#include <stdio.h>
#include <stdlib.h>

int main() {
    int hijo1, hijo2, hijo3, mayor, mediano, chico;
    float media;
    printf("Escribe la edad del primer hijo\n");
    scanf("%d",&hijo1);
    printf("Escribe la edad del segundo hijo\n");
    scanf("%d",&hijo2);
    printf("Escribe la edad del tercer hijo hijo\n");
    scanf("%d",&hijo3);
    if(hijo1<=hijo2){
        mayor=hijo2;
        if(mayor<=hijo3){
            mayor=hijo3;
            mediano=hijo2;
            chico=hijo1;
        }else{
            if(hijo1<=hijo3){
                mediano=hijo3;
                chico=hijo1;
            }else{
                mediano=hijo1;
                mediano=hijo3;
            }
        }
    }else{
        mayor=hijo1;
        if(mayor<=hijo3){
            mayor=hijo3;
            mediano=hijo1;
            chico=hijo2;
        }else{
            if(hijo2<=hijo3){
                mediano=hijo3;
                chico=hijo2;
            }else{
                mediano=hijo2;
                chico=hijo3;
            }
        }
    }
    
    printf("\nLa edad mayor es: %d\nLa edad menor es: %d\n", mayor, chico);
    
    media=(float)(hijo1+hijo2+hijo3)/3;
    
    printf("La media es: %f", media);
    return 0;
}

