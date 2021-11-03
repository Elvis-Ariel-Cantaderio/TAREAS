
#include <stdio.h>
#include <stdlib.h>
#include "fuction.h"
//crear una estructura donde se guarden las variables que voy a utlizar


 int main() {
    int rellenar, vector[5], menu,borrar;
    do {
        printf("\nque opcion decea elegir\n1:para rellenar el vector\n2:para vaciar vector\n3:para ver la posicion\n4:para salir");
        scanf("%i", &menu);
        switch(menu){
            case 1:
                rellenar=comprar();
                if(vector[rellenar-1]==1){
                     printf("posicicion esta llena");
                    
                }else{
                    vector[rellenar-1]=1;
                    printf("posicicion rellenada con exito");
                }
                
                //comprar(vector[]);     
                break;
            case 2:
                borrar=borrar_();
                if(vector[borrar-1]==1){
                    vector[borrar-1]=0;
                     printf("esa posicion se borro con exito");
                }else{
                    printf("esa posicion esta vacia");
                }
                break;
            case 3:
                for(int i=1;i<=5;i++){
                    printf("%i\n",vector[i]);
                }
                printf("\n");
                break;
            case 4:
                menu=4;
                break;
            default:
                printf("usted se equivoco");
                break;
                
        }
        
    } while (menu!=4);
    return 0;
}
/*
 int main() {
    int menu, numeroFila, numeroColumna;
    do {
        printf("ingrese el numero de filas para la matriz");
        scanf("%i", &numeroFila);
    } while (numeroFila < 1 || numeroFila > 4);
    do {
        printf("ingrese el numero de columnas para la matriz");
        scanf("%i", &numeroColumna);
    } while (numeroColumna < 1 || numeroColumna > 2);
    int matriz[numeroFila][numeroColumna]; // se debe crear un solo con los datos 
    do {
        printf("que opcion decea elegir\n1:para asignar\n0:para salir");
        scanf("%i", &menu);
        switch (menu) {
            case 0:
                menu = 0;
                break;
            case 1:
                rellenar(matriz, numeroFila, numeroColumna);
                break;
            case 2:

                break;
            default:
                printf("error de opcion de menu!!");
                break;

        }
    } while (menu != 0);
}
 */



