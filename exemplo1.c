/*
Vamos aprender sobre
vetores
sua declaração
recebimento de valores
apresentação do resultado em tela
*/

#include <stdio.h>

int main(){

    int vet[10], i;

    /*
    //[0, 1, 2, 3, ....8.,9]
    //[10, 9,........2,....]
    vet[0] = 10;
    vet[1] = 9;
    vet[8] = 2;

    printf("%d\n", vet[8]);
    */

    for(i = 0; i < 10; i++){
        printf("Valor de i = %d\n", i);
        vet[i] = i + 1;
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    printf("\n\n\n\n:::::APRESENTACAO DOS DADOS QUE ESTAO NO VETOR:::::\n");
    for(i = 0; i < 10; i++)
        printf("vet[%d] = %d\n", i, vet[i]);

return 0;
}
