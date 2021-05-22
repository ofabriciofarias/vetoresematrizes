/*
Declarar um vetor
Definir o tamanho desse vetor
Armazenar valores nesse vetor via teclado
Apresentar esse valores
*/

#include <stdio.h>

int main(){

    int max;

    printf("Digite o tamanho do seu vetor = ");
    scanf("%d", &max);

    if(max < 0){
        max = -1 * max;
    }

    int vetor[max], i;

    for(i = 0; i < max; i++){
        printf("Digite o valor do vetor na posicao %d = ", (i+1));
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < max; i++)
        printf("v[%d] = %d\n", (i+1), vetor[i]);

return 0;
}
