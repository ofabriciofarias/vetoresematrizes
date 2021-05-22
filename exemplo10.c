/*
Criaçao de matriz
Atribuição de valores
Apresentacao dos valores
Tudo utilizando laços
*/

#include <stdio.h>

int main(){

    int linha = 2;
    int coluna = 3;
    int mat[linha][coluna];
    int i; //vai auxiliar para percorrer as linhas
    int j; //vai auxiliar para percorrer as colunas

    //Atribuir valores a nossa matriz.
    //Vai ser utilizando o scanf e o for
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("mat[%d][%d] = ", (i+1), (j+1));
            scanf("%d", &mat[i][j]);
        }
    }

    //Apresentacao dos resultados
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //Fazendo a transposta da matriz
    int transp[coluna][linha];
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            transp[j][i] = mat[i][j];
        }
    }

    printf("\n\n\n\n::::MATRIZ TRANSPOSTA DE MAT::::\n");
    for(i = 0; i < coluna; i++){
        for(j = 0; j < linha; j++){
            printf("%d  ", transp[i][j]);
        }
        printf("\n");
    }

return 0;
}
