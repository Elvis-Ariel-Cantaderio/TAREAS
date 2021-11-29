#include <stdio.h>
#include <stdlib.h>
#include "Dobles.h"
nodo* primero=NULL;
nodo* ultimo=NULL;
// <- 23,45,15,1->?//
// se ocupa primero solo para el primer nodo y ultimo solo para el ultimo nodo de hai todo depende del puntero (nuevo->dato)
void insertarNodo(){
    nodo* nuevo=(nodo* )malloc(sizeof(nodo));
    printf("Ingrese un nuevo dato");
    scanf("%d",&nuevo->dato);
    if(primero==NULL){
        primero=nuevo;
        primero->siguiente=NULL;
        primero->atras=NULL;
        ultimo=primero;
    }else{
        ultimo->siguiente=nuevo;
        nuevo->siguiente=NULL;
        nuevo->atras=ultimo;
        ultimo=nuevo;     
    }
    printf("nodo ingresado con exito\n");
}
 void desplegarList1(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if(primero!=NULL){
        while(actual!=NULL){
            printf("%d\n",actual->dato);
            actual=actual->siguiente;      
        }
    }else{
       printf("la lista no existe"); 
    }
}
 void desplegarList2(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=ultimo;
    if(ultimo!=NULL){
        while(actual!=NULL){
            printf("%d\n",actual->dato);
            actual=actual->atras;      
        }
    }else{
       printf("la lista no existe"); 
    }
}
// buscar un nod dentro de las listas
 void buscarNodo1(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    int nodoBuscado=0,conta=0;
    printf("Ingrese el nodo a ser buscado");
    scanf("%d",&nodoBuscado);
    if(primero!=NULL){
        while(actual!=NULL && conta!=1){
            if(actual->dato==nodoBuscado){
                printf("nodo encontrado con exito: %d\n",actual->dato);
                conta=1;
            }
            actual=actual->siguiente;      
        }
        if(conta==0){
            printf("nodo no encontrado\n");
        }
    }else{
       printf("la lista no existe"); 
    }
} 
 void remplazarNodo(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    int nodoBuscado=0,conta=0;
    printf("Ingrese el nodo a ser buscado");
    scanf("%d",&nodoBuscado);
    if(primero!=NULL){
        while(actual!=NULL && conta!=1){
            if(actual->dato==nodoBuscado){
                printf("nodo encontrado con exito: %d\n",actual->dato);
                printf("ingrese el nuevo nodo\n");
                scanf("%d",&actual->dato);
                printf("el nodo fue modificado con exito\n");
               conta=1;
            }
            actual=actual->siguiente;      
        }
        if(conta==0){
            printf("nodo no encontrado\n");
        }
    }else{
       printf("la lista no existe"); 
    }
 }