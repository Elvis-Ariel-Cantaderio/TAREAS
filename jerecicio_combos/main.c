#include<stdio.h>

int main() {
    int clientes = 0, combos = 0, cuantos_combos = 0, conta_combos, seguir_ordenando, orden1, orden2, orden3, orden4 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, totales = 0;
    do {
        printf("RESTAURANTE LA LAGUNA");
        do {
            if (seguir_ordenando == 2) {
                printf("orden cancelada\n");
            }
            printf("Cual combo decea???\n1:1.Combo #1 $5\n2.Combo #2 $6 \n3.Combo #3 $7 \n4.Combo #4 $8");
            scanf("%i", &combos);
            if (combos == 1 || combos == 2 || combos == 3 || combos == 4) {
                switch (combos) {
                    case 1:
                        printf("Cuantos combos decea boludo?\n");
                        scanf("%i", &cuantos_combos);
                        if (cuantos_combos >= 1 && cuantos_combos <= 10) {
                            orden1 = orden1 + cuantos_combos * 5;
                            cont1 = cont1 + cuantos_combos;
                        } else {
                            printf("error");
                        }
                        break;
                    case 2:
                        printf("Cuantos combos decea boludo?\n");
                        scanf("%i", &cuantos_combos);
                        if (cuantos_combos >= 1 && cuantos_combos <= 10) {
                            orden2 = orden2 + cuantos_combos * 10;
                            cont2 = cont2 + cuantos_combos;
                        } else {
                            printf("error");
                        }
                        break;
                    case 3:
                        printf("Cuantos combos decea boludo?\n");
                        scanf("%i", &cuantos_combos);
                        if (cuantos_combos >= 1 && cuantos_combos <= 10) {
                            orden3 = orden3 + cuantos_combos * 15;
                            cont3 = cont3 + cuantos_combos;
                        } else {
                            printf("error");
                        }
                        break;
                    case 4:
                        printf("Cuantos combos decea boludo?\n");
                        scanf("%i", &cuantos_combos);
                        if (cuantos_combos >= 1 && cuantos_combos <= 10) {
                            orden4 = orden4 + cuantos_combos * 20;
                            cont4 = cont4 + cuantos_combos;
                        } else {
                            printf("error");
                        }
                        break;
                }
            } else {
                printf("error");
            }
            printf("1:Decea seguir ordenando\n2;cambiar de orden\n culaquier otro numero para cerrar la cuenta");
            scanf("%i", &seguir_ordenando);
            combos == 0;
        } while (seguir_ordenando == 1 || seguir_ordenando == 2);
        printf("total orden1 %i %i\n", cont1, orden1);
        printf("total orden1 %i %i\n", cont2, orden2);
        printf("total orden1 %i %i\n", cont3, orden3);
        printf("total orden1 %i %i\n", cont4, orden4);
        printf("hay clientes por atender\n1.para si\n2:para cerrar el negocio");
        scanf("%i", &clientes);
    } while (clientes == 1);
    printf("la caja se cerro sactisfactoriamente boludo\n");
    totales = totales + (orden1 + orden2 + orden3 + orden4);
    printf("total orden1 %i %i\n", cont1, orden1);
    printf("total orden1 %i %i\n", cont2, orden2);
    printf("total orden1 %i %i\n", cont3, orden3);
    printf("total orden1 %i %i\n", cont4, orden4);
    printf("totales %i\n", totales);
    return 0;
}