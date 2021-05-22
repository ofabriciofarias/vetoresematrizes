/*
Criaçao de matriz
Atribuição de valores
Apresentacao dos valores
*/

#include <stdio.h>

int main(){

    int mat[2][2];

    scanf("%d", &mat[0][0]);
    scanf("%d", &mat[0][1]);
    scanf("%d", &mat[1][0]);
    scanf("%d", &mat[1][1]);

    printf("|%d   ", mat[0][0]);
    printf("%d|\n", mat[0][1]);
    printf("|%d   ", mat[1][0]);
    printf("%d|\n", mat[1][1]);

return 0;
}
