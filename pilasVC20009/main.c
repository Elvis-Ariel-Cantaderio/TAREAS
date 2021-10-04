
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main() {
    elemento*uno = malloc(sizeof (elemento));
    elemento*dos = malloc(sizeof (elemento));
    elemento*tres = malloc(sizeof (elemento));
    elemento*cuatro = malloc(sizeof (elemento));
    uno->nombre = "semansky";
    dos->nombre = "serwey";
    tres->nombre = "cuando lo que Dios hace no tiene sentido";
    cuatro->nombre = "La idiologia de la nueva izquierda";
    agregar(uno);
    agregar(dos);
    agregar(tres);
    agregar(cuatro);
    elemento*i=extraer();
    while(i!=NULL){
        printf("%s\n",i->nombre);
        i=extraer();
    }
    return 0;
}

