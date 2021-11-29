/*
 una lista es igual que una cola
 tiene un primero y un ultimo..
 */
#include <stdio.h>
#include <stdlib.h>
#include "listasSimples.h"
nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("Ingrese el dato que contendra el nuevo nodo en la lista!\n");
    scanf("%d", &nuevo->dato);
    if (primero == NULL) {
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo=nuevo;
    }
    printf("nodo agregado con exito\n");
}

void desplegarLista() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        while (actual != NULL) {
            printf("%d\n",actual->dato);
            actual=actual->siguiente;
        }
    } else {
        printf("el dato no existe en la lista\n");
    }

}
void buscarNodo(){
   nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    int nodoBuscado=0,contador=0;
    printf("Ingrese el nodo a buscar dentro de la lista de datos");
    scanf("%d",&nodoBuscado);
    if (primero != NULL) {
        while (actual != NULL && contador!=1) {
            if(actual->dato==nodoBuscado){
                printf("el nodo fue encontrado con exito(%d)\n",actual->dato);
                contador=1;
            }
            actual=actual->siguiente;
        }
       if(contador==0){
           printf("el nodo no fue encontrado en la lista\n");
       } 
    } else {
        printf("el dato no existe en la lista\n");
    }
}
void modificarNodo(){
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    int nodoBuscado=0,contador=0;
    printf("Ingrese el dato del nodo pra modificar en la lista");
    scanf("%d",&nodoBuscado);
    if (primero != NULL) {
        while (actual != NULL && contador!=1) {
            if(actual->dato==nodoBuscado){
                 printf("el nodo fue encontrado con exito(%d)\n",actual->dato);
                 printf("Ingrese el  nuevo nodo");
                 scanf("%d",&actual->dato);
                 printf("nodo modificado con exito\n");
                contador=1;
            }
            actual=actual->siguiente;
        }
       if(contador==0){
           printf("el nodo no fue encontrado en la lista\n");
       } 
    } else {
        printf("el dato no existe en la lista\n");
    }
}