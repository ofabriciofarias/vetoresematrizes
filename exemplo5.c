/*
Somar elementos de dois vetores
Os vetores devem possuir a mesma dimensão
*/

#include <stdio.h>

int main(){

    int tam = 5;
    int v1[tam], v2[tam], vr[tam], i;

    //INICIAR OS VETORES 1 e 2
    for(i = 0; i < tam; i++){
        printf("v1[%d] = ", (i+1));
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < tam; i++){
        printf("v2[%d] = ", (i+1));
        scanf("%d", &v2[i]);
    }

    //Somar os valores dos vetores
    for(i = 0; i < tam; i++){
        //Caso o calculo fosse para o produto, voce comentaria a linha 29 e descomentaria
        //a linha 28
        //vr[i] = v1[i] * v2[i];
        vr[i] = v1[i] + v2[i];
    }

    for(i = 0; i < tam; i++){
        printf("vr[%d] = %d\n", (i+1), vr[i]);
    }

return 0;
}
