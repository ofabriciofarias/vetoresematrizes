/*
Teremos uma matriz quadradada
Com diagonal principal igual a 1 e demais elementos iguais a 0
*/

#include <stdio.h>

/*

i/j 0 1 2 3
0   1 0 0 0
1   0 1 0 0
2   0 0 1 0
3   0 0 0 1


*/
int main(){

    int matriz[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }


return 0;
}
