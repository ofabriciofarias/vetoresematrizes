/*
Receber duas matrizes de mesma dimensao e somar seus elementos
Ao final, mostrar a matriz resultante ao usuario
*/

#include <stdio.h>

int main(){

    int matA[3][2], matB[3][2], matR[3][2];
    int i, j;

    //Adicionar os valores na matriz matA
    printf(":::INICIANDO A MATRIZ A:::\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("matA[%d][%d] = ", (i+1),(j+1));
            scanf("%d", &matA[i][j]);
        }
    }

    //Mostrar a matriz A
    printf(":::APRESENTANDO A MATRIZ A:::\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d  ", matA[i][j]);
        }
        printf("\n");
    }

    //Adcionar os valores na matriz matB
    printf(":::INICIANDO A MATRIZ B:::\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("matB[%d][%d] = ", i+1, j+1);
            scanf("%d", &matB[i][j]);
        }
    }

    //Mostrar a matriz B
    printf(":::APRESENTANDO A MATRIZ B:::\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d  ", matB[i][j]);
        }
        printf("\n");
    }

    //Calcular a soma dos elementos da matriz A com os elementos da matriz B
    printf("\nSomando os valores das matriz\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            matR[i][j] = matA[i][j] + matB[i][j];
            printf("%d ", matR[i][j]);
        }
        printf("\n");
    }

    return 0;
}
