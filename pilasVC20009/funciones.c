#include <stdio.h>
#include "funciones.h"
elemento* ultimo=NULL;
void agregar(elemento* _elemento){
   // evaluar si la pila esta vacia
    _elemento -> siguiente=NULL;
    if(ultimo==NULL){
        ultimo=_elemento;
    }else{
        _elemento -> siguiente=ultimo;
        ultimo=_elemento;
    }
}
 elemento* extraer(){
    if(ultimo==NULL){
        return NULL;
    }
      elemento* elemento_retorno=ultimo;
      ultimo=elemento_retorno -> siguiente;
      return elemento_retorno;      
}