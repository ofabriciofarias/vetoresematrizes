/*
Vamos aprender sobre
vetores
sua declaração
recebimento de valores
apresentação do resultado em tela
*/

#include <stdio.h>

int main(){

    int v[10], i;

    //Entrada dos valores no vetor
    for(i = 0; i < 10; i++){
        printf("Digite o valor do vetor na posicao %d: ", (i+1));
        scanf("%d", &v[i]);
    }

    //Apresentacao dos valores armazenados no vetor
    printf("\n\n\n:::APRESENTA OS VALORES ARMAZENADOS:::\n");
    for(i = 0; i < 10; i++)
        printf("v[%d] = %d\n", i, v[i]);


return 0;
}
