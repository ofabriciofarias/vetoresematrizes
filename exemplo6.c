/*
Concatenação de dois vetores, gerando um vetor resultante.

*/

#include <stdio.h>

int main(){

    int tam = 5;
    int tamResultante = 2*tam; //10
    int v1[tam];
    int v2[tam];
    int vr[tamResultante];
    int i, cont;

    //Inicializar os vetores v1 e v2
    for(i = 0; i < tam; i++){
        //Iniciar o v1
        printf("Digite o valor de v1[%d] = ", (i+1));
        scanf("%d", &v1[i]);

        //Iniciar o v2
        printf("Digite o valor de v2[%d] = ", (i+1));
        scanf("%d", &v2[i]);
    }

    //Concatenar os vetores
    cont = 0;
    for(i = 0; i < tamResultante; i++){
        //Vamos concatenar os elementos.
        vr[cont] = v1[i];
        cont++;
        vr[cont] = v2[i];
        cont++;
    }

    for(i = 0; i < tamResultante; i++){
        printf("vr[%d] = %d\n", (i+1), vr[i]);
    }

return 0;
}
