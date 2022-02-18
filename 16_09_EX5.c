/*Ler dois conjuntos de números reais, armazenando-os em vetores e
calcular o produto escalar entre eles. Os conjuntos têm 5
elementos cada. Imprimir os dois conjuntos e o produto escalar,
sendo que o produto escalar é dado por: x1y1 + x2y2 + ... + xnyn*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int c1[5] = {1,9,-5,4,-3};
    int c2[5] = {2,5,8,-3,-7};

    int produto_escalar[5];

    printf("Conjunto 1:");
    for(int i=0;i<5;i++){
        printf("%d ", c1[i]);
    }
    printf("\n\n");
    printf("Conjunto 2:");
    for(int i=0;i<5;i++){
        printf("%d ", c2[i]);
    }
    printf("\n\n");
    printf("Vetor do Produto Escalar:");
    for(int i=0;i<5;i++){
        produto_escalar[i] = c1[i]*c2[i];
        printf("%d ", produto_escalar[i]);
    }
}
