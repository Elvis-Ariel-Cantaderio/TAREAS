
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char** argv) {
    Nodo*arbol = NULL;
    insertarNodo(&arbol, 5);
    insertarNodo(&arbol, 10);
    insertarNodo(&arbol, 4);
    insertarNodo(&arbol, 9);
    DeterminarExistencia(arbol,10);
    DeterminarExistencia(arbol,3);
    DeterminarExistencia(arbol,8);
    return (EXIT_SUCCESS);
}

