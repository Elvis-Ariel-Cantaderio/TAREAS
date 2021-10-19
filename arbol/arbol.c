#include <stdio.h>
#include <stdlib.h>
#include "arbol.h";
_nodo *crear(int dato){
    _nodo *nuevo=(_nodo*)malloc(sizeof(_nodo));
    nuevo->dato=dato;
    nuevo->der=NULL;
    nuevo->izq=NULL;
    return nuevo;
}
_nodo *addDerecha(_nodo *nuevo,_nodo *raiz){
    raiz->dato=nuevo;
    return raiz;
}
_nodo *addIzquierda(_nodo *nuevo,_nodo *raiz){
    raiz->izq=nuevo;
    return raiz;
}
void imprimir(_nodo *nodo){
    if(nodo!=NULL){
        printf("%d",nodo->dato);
    }
}
void preorden(_nodo *raiz){
    if(raiz!=NULL){
        imprimir(raiz);
        preorden(raiz->izq);
        preorden(raiz->der);
    }
}
void inorden(_nodo *raiz){
    if(raiz!=NULL){
        preorden(raiz->izq);
        imprimir(raiz);
        preorden(raiz->der);
    }
}
void postOrden(_nodo *raiz){
     if(raiz!=NULL){
        imprimir(raiz);
        preorden(raiz->izq);
        preorden(raiz->der);
    }
}