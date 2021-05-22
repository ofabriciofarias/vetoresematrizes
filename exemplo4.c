/*
Vamos receber o tamanho maximo do vetor
Vamos converter para positivo, caso a entrada seja negativa
Vamos receber os valores do vetor digitados pelo usuario
Vamos receber um escalar e multiplicar pelo vetor
Vamos apresentar o resutado da multiplicacao
*/

#include <stdio.h>

int main(){

    int tam, escalar;

    printf("Digite o tamanho do seu vetor = ");
    scanf("%d", &tam);

    if(tam < 0){
        tam = -1 * tam;
        printf("Valor negativo, este sera convertido para um valor positivo.\nNovo valor = %d", tam);
    }

    printf("\n\n:::ADICIONANDO OS VALORES NO VETOR:::\n");
    int vetor[tam], i;
    for(i = 0; i < tam; i++){
        printf("vetor[%d] = ", (i+1));
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o valor do Escalar = ");
    scanf("%d", &escalar);

    printf("\n\n\n::::LACO DE MULTIPLICACAO::::\n");
    int novoVetor[tam];
    for(i = 0; i < tam; i++){
        novoVetor[i] = escalar * vetor[i];
        printf("Novo Vetor [%d]= %d\n", (i+1), novoVetor[i]);
    }

return 0;
}
