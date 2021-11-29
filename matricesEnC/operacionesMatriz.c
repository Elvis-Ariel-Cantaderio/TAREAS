#include <stdio.h>
#include <stdlib.h>
#include "operacionesMatriz.h"

int DimencionarFila() {
    int fila;
    do {
        printf("cuantas filas decea que tenga su matriz entre (5 y 10)?\n");
        scanf("%i", &fila);
    } while (fila < 5 || fila > 10);
    return fila;

}
int DimencionarColumna() {
    int columna;
    do {
        printf("cuantas columnas decea que tenga su matriz entre (5 y 10)?\n");
        scanf("%i", &columna);
    } while (columna < 5 || columna > 10);
    return columna;
}
void inicializar(int filas,int columnas,int matrix[][columnas]){
    for(int fila=0;fila<filas;fila++){
        for(int columna=0;columna<columnas;columna++){
          matrix[fila][columna]=0;  
        }
    }
}
void ver(int filas, int columnas,int matrix[][columnas]) {
    for (int fila = 0; fila < filas; fila++) {
        for (int columna = 0; columna < columnas; columna++) {
            printf("%i\t",matrix[fila][columna]);//contruye una fila luego /n y otra fila
        }
        printf("\n");
    }
}
void transpuesta(int filas, int columnas,int matrix[][columnas]){
    for(int columna=0;columna<columnas;columna++){
       for(int fila=0;fila<filas;fila++){
           printf("\t%i",matrix[fila][columna]);
    } 
       printf("\n");
    }
}
void ocupar(int filas, int columnas,int matrix[][columnas]){
    int fila,columna;
    
    do{
    printf("En que fila decea \n");
    scanf("%i",&fila); 
    }while(fila<1 || fila>filas);
    do{
    printf("En que columna decea \n");
    scanf("%i",&columna); 
    }while(columna<1 || columna>columnas);
    if(matrix[fila-1][columna-1]==1){
        printf("El puesto esta lleno sorry!!");
         
    }else{
        printf("su puesto en la columna %i y el la fila %i se asigno con exito\n",fila,columna);
        matrix[fila-1][columna-1]=1; 
    }
}