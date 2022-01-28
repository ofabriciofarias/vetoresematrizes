/*

Diagonal Secundaria

*/


#include <stdio.h>

int main(){

    int tam = 5, i, j;
    int mat[tam][tam];

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            mat[i][j] = i + i + j;
        }
    }

     for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
                if((j + i) == (tam - 1)){
                    printf("%d ", mat[i][j]);
                }else{
                    printf("0 ");
                }
        }
        printf("\n");
    }
return 0;
}
