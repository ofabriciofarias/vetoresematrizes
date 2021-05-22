/*
Encontrar o maior e menor valor em nosso vetor
*/

#include <stdio.h>

int main(){

    int tam = 20;
    int i;
    int v[tam];
    int menor, maior;
    int id_menor, id_maior;

    //INICIAR O VETOR v
    for(i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }

    menor = v[0];
    maior = v[0];
    id_menor = 0;
    id_maior = 0;

    for(i = 0; i < tam; i++){
        //Substituir o menor, quando necessario
        if(menor > v[i]){
            menor = v[i];
            id_menor = i;
        }
        //Substituir o maior, quando necessario
        if(maior < v[i]){
            maior = v[i];
            id_maior = i;
        }
    }

    printf("Maior = %d com identificador i %d\n", maior, id_maior);
    printf("Menor = %d com identificador i %d\n", menor, id_menor);

    printf("\n\n\n::::::::::::::::::::::::");
    printf("Maior = %d\n", v[id_maior]);
    printf("Menor = %d\n", v[id_menor]);

return 0;
}
