/*
Criaçao de matriz
Atribuição de valores
Apresentacao dos valores
*/

#include <stdio.h>

int main(){

    int mat[2][2];

    mat[0][0] = 2;
    mat[0][1] = 3;
    mat[1][0] = 5;
    mat[1][1] = 7;

    /*
      0   1
    0|2   3|
    1|5   7|
    */

    printf("|%d   ", mat[0][0]);
    printf("%d|\n", mat[0][1]);
    printf("|%d   ", mat[1][0]);
    printf("%d|\n", mat[1][1]);

return 0;
}
