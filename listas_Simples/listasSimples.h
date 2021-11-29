
#ifndef LISTASSIMPLES_H
#define LISTASSIMPLES_H
typedef struct{
    int dato;
    struct nodo* siguiente;
}nodo;
// esta estructura para que se puede comunicar con ls funciones.h y el main
void insertarNodo();
void buscarNodo();
void modificarNodo();
void desplegarLista();
#endif /* LISTASSIMPLES_H */

