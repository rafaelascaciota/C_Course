/*Ler um conjunto de números reais, armazenando-o em vetor e
calcular o quadrado dos componentes deste vetor, armazenando o
resultado em outro vetor. Os conjuntos têm 10 elementos cada.
Imprimir todos os conjuntos.*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    float vetor[10], quadrado[10];

    for(int i=0;i<10;i++){
        printf("Digite o numero da posicao [%d] do vetor:\n", i);
        scanf("%f", &vetor[i]);
    }

    printf("Vetor Recebido\n");
    for(int i=0;i<10;i++){
        printf("%.2f ", vetor[i]);
    }

    printf("\n\n");
    printf("Vetor Quadrado\n");
    for(int i=0;i<10;i++){
        quadrado[i]=vetor[i]*vetor[i];
        printf("%.2f ", quadrado[i]);
    }
    printf("\n\n");

}
