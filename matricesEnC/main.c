#include <stdio.h>
#include <stdlib.h>
#include "operacionesMatriz.h"

int main(int argc, char** argv) {
    int filas, columnas, menu;
    filas = DimencionarFila();
    columnas = DimencionarColumna();
    int matrix[filas][columnas];
    inicializar(filas,columnas,matrix);
    do {
        
        printf("Ingrese una opcion a validar\n0:para cerrar\n1:para asignar");
        scanf("%i",&menu);
        switch (menu) {
            case 0:
                break;
            case 1:
                ocupar(filas,columnas,matrix);
                break;
            case 2:
                ver(filas,columnas,matrix);
                break;
            case 3:
                transpuesta(filas,columnas,matrix);
                break;
                
            default:
                break;
        }
    } while (menu!=0);

    return (EXIT_SUCCESS);
}

