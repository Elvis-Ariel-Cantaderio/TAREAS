#include <stdio.h>
#include "stdlib.h"
#include "funciones.h"
Nodo* crearNodo(int valor){// resive un parametro llamado valor valor para crear el nodo
    Nodo*nuevoNodo=(Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->valor=valor;
    nuevoNodo->izq=nuevoNodo->der=NULL;
    return nuevoNodo;
}
// este funcion no retorna nada
void DestruirNodo(Nodo*nodo){
    nodo->izq=nodo->der=NULL;
    free(nodo);
}
void insertarNodo(Nodo** arbol,int valor){
    if(*arbol==NULL){
        *arbol=crearNodo(valor);
    }else{
        int valorRaiz=(*arbol)->valor;
        if(valor<valorRaiz){
            insertarNodo(&(*arbol)->izq,valor);
        }else{
            insertarNodo(&(*arbol)->der,valor);
        }
   }
}
//evaluar para ver si esxiete un nodo
int Existe(Nodo* arbol,int valor){
    if(arbol==NULL){
        return 0;
    }else if(arbol->valor==valor){
        return 1;
    }else if(valor<arbol->valor){
        return Existe(arbol->izq,valor);
    }else{
        return Existe(arbol->der,valor);
    }
}
DeterminarExistencia(Nodo*arbol,int valor){
    if(Existe(arbol,valor)){
        printf("el nodo %d existe en el arbol\n",valor);
    }else{
        printf("el nodo %d no existe en el arbol\n",valor);
    }
}