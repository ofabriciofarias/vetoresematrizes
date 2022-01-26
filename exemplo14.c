//Exemplo de matriz para encontrar o maior e menor
#include <stdio.h>

int main(){

    int matriz[3][3];
    int i, j;
    int maior;
    int menor;

    printf("Preenchimento da Matriz\n");
    for(i = 0; i < 3; i++){ //vai percorrer as linhas
        //printf("Valor de i: %d\n", i);
        for(j = 0; j < 3; j++){ //vai percorrer as colunas
            printf("Digite o valor da posicao [%d,%d] = ", (i+1),(j+1));
            scanf("%d", &matriz[i][j]);
          //  printf("Valor de j: %d\n", j);

          //Encontrar o maior ou menor valor dentro da matriz
            if(i == 0 && j == 0){
                maior = matriz[i][j];
                menor = matriz[i][j];
            }

            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }

            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
            //Fim do Encontrar o maior valor dentro da matriz
        }
    }

    //Mostrar na tela o resultado
    printf("Apresentando o resultado na tela\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Deixar apenas os valores da diagonal superior\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i <= j){
                matriz[i][j] = 0;
            }
        }
    }

    //Mostrar na tela a nova Matriz, já com a diagonal superior apenas
    printf("Apresentando o resultado da matriz diagonal superior\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nO maior valor dentro da matriz = %d\n", maior);
    printf("O menor valor dentro da matriz = %d\n", menor);
    return 0;
}
