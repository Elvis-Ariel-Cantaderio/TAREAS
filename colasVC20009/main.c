#include <stdio.h>
#include <stdlib.h>
#include "coals.h"
int main(int argc, char** argv) {
     int menu = 0;
    do {
        printf("\ningrese una opcion valida\n1:para agregar un nuevo nodo\n2:para mostrar la lista de nodos\n3:para buscar nodo\n4:para modificar el nodo\n5:eliminar nodo\ncero para salir");
        scanf("%i",&menu);
        switch (menu) {
            case 0:
                menu=0;
                break;
            case 1:
                agregar();
                break;
            
             case 2:
                 printf("desplegar lista\n");
                extraer();
               
                break;
           case 3:
                 buscarnodo();
                break;
            case 4:
                modificarNodo();
                break;
            case 5:
                eliminarNodo();
                break;
            default:
                printf("ups opcion no valida\n");
                break;
        }
    } while (menu!=0);
    return (EXIT_SUCCESS);
}

