/*
Transformar os valores triangulares superiores em 1 e os demais em 0
Em outro momento vamos transformar os triangulares inferiores em 1 e os demais em 0
Para isso, vamos criar duas matrizes
*/

/*
i/j 0 1 2
0   0 1 1
1   0 0 1
2   0 0 0

i < j eu encontro a minha triangular superior

*/

/*
i/j 0 1 2
0   0 0 0
1   1 0 0
2   1 1 0

i > j eu encontro a minha triangular interior

*/

#include <stdio.h>

int main(){

    int triangSup[3][3], triangInf[3][3];
    int i, j;

    //TRIANGULAR SUPERIOR
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i < j){
                triangSup[i][j] = 1;
            }else{
                triangSup[i][j] = 0;
            }
        }
    }

    //TRIANGULAR INTERIOR
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i > j){
                triangInf[i][j] = 1;
            }else{
                triangInf[i][j] = 0;
            }
        }
    }

    //ILUSTRACAO DA MINHA MATRIZ TRIANGULAR SUPERIOR
    printf("::::Matriz triangular superior::::\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", triangSup[i][j]);
        }
        printf("\n");
    }

    //ILUSTRACAO DA MATRIZ TRIANGULAR INTERIOR
    printf("::::Matriz triangular interior::::\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", triangInf[i][j]);
        }
        printf("\n");
    }

return 0;
}
