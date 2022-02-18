/*Ler um conjunto de números reais, armazenando-o em vetor e
calcular o quadrado dos componentes deste vetor, armazenando o
resultado em outro vetor. Os conjuntos têm 10 elementos cada.
Imprimir todos os conjuntos*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float numeros[10];
    float quadrado[10];

    for(int i=0;i<10;i++){
        printf("Qual eh o numero da posicao [%d] do vetor:\n", i);
        scanf("%f", &numeros[i]);
        quadrado[i] = numeros[i]*numeros[i];
    }

    printf("Vetor de numeros:");
    for(int j=0;j<10;j++){
        printf("%.2f ", numeros[j]);
    }
    printf("\n\n");
    printf("Vetor dos numeros ao quadrado:");
    for(int j=0;j<10;j++){
        printf("%.2f ", quadrado[j]);
    }
    printf("\n\n");
}


