
#ifndef FUNCIONES_H
#define FUNCIONES_H
typedef struct{
    struct elemento* siguiente;
    char* nombre;
} elemento;
void agregar(elemento* _elemento);
elemento*extraer();
#endif /* FUNCIONES_H */

