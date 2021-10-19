
#include <stdio.h>
#include <stdlib.h>
#include "arbol.h";
int main(int argc, char** argv) {
        _nodo *raiz;
        raiz=crear(1);
        raiz->izq=crear(2);
        raiz->der=crear(3);
        raiz->izq->izq=crear(4);
        raiz->der->izq=crear(5);
        raiz->der->der=crear(6);
        printf("PREORDEN(R I D)\t");
        preorden(raiz);
        printf("\nINORDEN(R I D)\t");
        inorden(raiz);
        printf("\nPOSTORDEN(R I D)  ");
        postOrden(raiz);
        return 0;
    return (EXIT_SUCCESS);
}

