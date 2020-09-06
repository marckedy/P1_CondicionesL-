
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x=5;
    if(x >= 0)
        x++;
    else{
        if (x >=1);
        x +=2;
    }
    printf("%d\n", x);
    
    x=5;
    if(x >=0)
        x++;
    if(x >=1)
        x +=2;
    printf("%d\n", x);
    
    
    printf("  La diferencia es que en el primer if si la primer condicion es positiva\n");
    printf("Solo realizara la accion que indica, y si es negativa se ira a la segunda\n");
    printf("condicion, pero ya que esta condion es similar, no va a entrar a esta \n");
    printf("condicion al menos que sea (1), y ejecutara la operacion que viene en seguida.\n");
    printf("  Y en la segundo ejercicio es que se van a ejecutar los 2 if pero de igual\n");
    printf("modo si en la primera condicion no cumple, sera lo mismo para la segunda \n");
    printf("condicion, al menos que sea (1), y si entra en las dos condiciones se realizara\n");
    printf("las dos acciones que se indican.\n");
    return 0;
}

