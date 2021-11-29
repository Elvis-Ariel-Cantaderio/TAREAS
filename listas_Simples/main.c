
#include <stdio.h>
#include <stdlib.h>
#include "listasSimples.h"
int main(int argc, char** argv) {
    int menu=0;
    do {
        printf("\ningrese una opcion valida\n1:para agregar un nuevo nodo\n2:para mostrar la lista de nodos\n3:buscar nodo dentro de la lista\n4:modificar nodo\ncero para salir");
        scanf("%i",&menu);
        switch (menu) {
            case 0:
                menu=0;
                break;
            case 1:
                insertarNodo();
                break;
             case 2:
                 printf("desplegar lista\n");
                 desplegarLista();
                break;
            case 3:
                buscarNodo();
                break;
            case 4:
                modificarNodo();
                break;
            default:
                printf("huy!! opcion no valida crak");
                break;
        }
    } while (menu!=0);
    return (EXIT_SUCCESS);
}

