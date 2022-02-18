/*Ler dois conjuntos de números reais, armazenando-os em vetores e
calcular o produto escalar entre eles. Os conjuntos têm 5
elementos cada. Imprimir os dois conjuntos e o produto escalar,
sendo que o produto escalar é dado por: x1y1 + x2y2 + ... + xnyn.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    float conjunto1[5], conjunto2[5], escalar[5];

    for(int i=0;i<5;i++){
        printf("Escreva os valores do CJ1[%d]",i);
        scanf("%f",&conjunto1[i]);
    }

    for(int i=0;i<5;i++){
        printf("Escreva os valores do CJ2[%d]",i);
        scanf("%f",&conjunto2[i]);
    }

    printf("Vetor do produto Escalar:\n");
    for(int i=0;i<5;i++){
        escalar[i] = conjunto1[i]*conjunto2[i];
        printf("%.2f ", escalar[i]);
    }
}
