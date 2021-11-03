#include <stdio.h>
#include "fuction.h"

 int comprar(){
    int rellenar;
    printf("que numero del vector decea rellenar(recuerde entre 1 y 5)\n");
    scanf("%i",&rellenar);
        if(rellenar>0 && rellenar<6){
            return rellenar;
    }else{
        printf("el nuemero que usted decea se encuentra fuera del rango del vctor");
        
    }
       
}
//hola este es un comentaruio se payara servlet de ,os cueles fueron para poder salir 
int borrar_(){
    int borrar;
    printf("que posicion decea borrar");
    scanf("%i",&borrar);
        if(borrar>0 && borrar<6){
            return borrar;
    }else{
        printf("el nuemero que usted decea no esta");
        
    }
}
void rellenar(int numeroFila,int numeroColumna,int matriz[][numeroColumna]){
    int rellenarFila,rellenarColumna;
    do{
    printf("que numero de fila decea entre (1 y 4)?");
    scanf("%i",&rellenarFila);
    }while(rellenarFila<1 || rellenarFila>numeroFila);
    do{
    printf("que numero de fila decea entre (1 y 4)?");
    scanf("%i",&rellenarColumna);
    }while(rellenarColumna<1 || rellenarColumna>numeroColumna);
    if(matriz[rellenarFila-1][rellenarColumna-1]==0){
        matriz[rellenarFila-1][rellenarColumna-1]=1;
        printf("el puesto en la fila %i y la columna %i a sido aignado con exito \n",rellenarFila,rellenarColumna);
    }else{
        printf("el puesto esta lleno sorry\n");
    }
} 

