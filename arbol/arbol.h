
#ifndef ARBOL_H
#define ARBOL_H
struct nodo{
    int dato;
    struct nodo *der;
    struct nodo *izq;
};
typedef struct nodo _nodo;
_nodo *crear();
_nodo *addDerecha();
_nodo *addIzquierda();
void imprimir();
void preorden();
void inorden();
void postOrden();
#endif /* ARBOL_H */

