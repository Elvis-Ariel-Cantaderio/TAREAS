#include <stdio.h>
#include <stdlib.h>
#include "coals.h"
nodo* primero = NULL;
nodo* ultimo = NULL;

nodo *agregar() {
    nodo*datos = (nodo*) malloc(sizeof (nodo));
    printf("Ingrese un dato\n");
    scanf("%d", &datos->nombre);
    //la pila esta vacia para gregar
    if (primero == NULL) {
        primero = datos;
        primero->proximo = NULL;
        ultimo = datos;
    } else {
        ultimo->proximo = datos;
        datos->proximo = NULL;
        ultimo = datos;
    }
}

nodo *buscarnodo() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    int nodoBuscado = 0, encontrado = 0;
    if (primero != NULL) {
        printf("Ingrese el valor del nodo a buscar en la cola\n");
        scanf("%d", &nodoBuscado);
        while (actual != NULL && encontrado != 1) {
            nodo*hola = actual->nombre;
            if ((hola == nodoBuscado)) {
                printf("nodo encontrado %d\n",nodoBuscado);
                encontrado = 1;
            }
            actual = actual->proximo;
        }
        if (encontrado == 0) {
            printf("el nodo no existe");
        }
    } else {
        printf("la cola no existe\n");
    }
}

nodo *modificarNodo() {
    // primero debemos buscra el nod para ver si se encuentra
    //luego de ser encontrado debemos modificarlo
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    int nodoBuscado = 0, encontrado = 0,valorNuevo=0;
    if (primero != NULL) {
        printf("Ingrese el valor del nodo a buscar para ser modificado dentro de la cola\n");
        scanf("%d", &nodoBuscado);
        while (actual != NULL && encontrado != 1) {
            nodo*hola = actual->nombre;
            if ((hola == nodoBuscado)) {
                printf("nodo encontrado %d\n",nodoBuscado);
                printf("Ingrese el nuevo valor del nodo");
                scanf("%d",&actual->nombre);
                printf("\nnodo modificado con exito");
                encontrado = 1;
            }
            actual = actual->proximo;
        }
        if (encontrado == 0) {
            printf("el nodo no existe");
        }
    } else {
        printf("la cola no existe\n");
    }
}
nodo *eliminarNodo(){
    
     nodo *actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
      nodo *anterior = (nodo*) malloc(sizeof (nodo));
    int nodoBuscado = 0, encontrado = 0;
    if (primero != NULL) {
        printf("Ingrese el valor del nodo a buscar para ser eliminado dentro de la cola\n");
        scanf("%d", &nodoBuscado);
        while (actual != NULL && encontrado != 1) {
            nodo*hola = actual->nombre;
            if ((hola == nodoBuscado)) {
                //hay tres casos eliminar el primero,segundo y los demas datos
                if(actual==primero){
                    primero=primero->proximo;
                }else if(actual==ultimo){
                    anterior->proximo=NULL;
                }else{
                    anterior->proximo=actual->proximo;
                }
                printf("nodo elimidado con exito\n");
                encontrado = 1;
            }
            anterior=actual;
            actual = actual->proximo;
        }
        if (encontrado == 0) {
            printf("el nodo no existe");
        }else{
            free(anterior);
        }
    } else {
        printf("la cola no existe\n");
    }
}

nodo *extraer() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        while (actual != NULL) {
            printf("%d\n", actual->nombre);
            actual = actual->proximo;
        }
    } else {
        printf("la cola no existe\n");
    }
}
