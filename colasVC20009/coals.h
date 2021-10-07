
#ifndef COALS_H
#define COALS_H
typedef struct{
    struct nodo* proximo;
    int* nombre;
}nodo;
nodo *agregar();
nodo*extraer();
nodo* buscarnodo();
nodo *modificarNodo();
nodo *eliminarNodo();
#endif /* COALS_H */

