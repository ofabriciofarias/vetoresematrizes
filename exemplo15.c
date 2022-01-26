/*18. Faça um programa que receba um vetor B(50) de reais e calcule o maior valor presente
no vetor. A seguir, o programa deve dividir todos os elementos de B pelo maior valor
encontrado. Por fim, deve apresentar o resultado na tela.*/

#include <stdio.h>

int main(){

    int tam = 5;
    float B[tam], maior, BDividido[tam];
    //double B[50];
    int i;

    printf("Digite %d valores reais\n", tam);

    for(i = 0; i < tam; i++){
        printf("Digite o valor de B na posicao %d = ", (i+1));
        scanf("%f", &B[i]);

        if(i == 0){
            maior = B[i];
        }

        if(maior < B[i]){
            maior = B[i];
        }
    }

    if(maior != 0){

        for(i = 0; i < tam; i++){
            BDividido[i] = B[i]/maior;
        }
            printf("B               BDividido\n");
        for(i = 0; i < tam; i++){
            printf("%f               %f\n", B[i],BDividido[i]);
        }

    }else{
        printf("Erro: Nao foi possivel realizar a divisao\n");
    }

    printf("\nPor fim, o maior valor encontrado foi de %f", maior);
return 0;
}
