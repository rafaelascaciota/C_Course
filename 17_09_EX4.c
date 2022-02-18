/*Faça um programa que receba do usuário dois vetores, A e B, com
10 números inteiros cada. Crie um novo vetor denominado C
calculando C = A - B. Mostre na tela os dados do vetor C.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10], B[10], C[10];

    for(int i=0;i<10;i++){
        printf("Escreva o vetor A[%d]",i);
        scanf("%d", &A[i]);
    }

    for(int i=0;i<10;i++){
        printf("Escreva o vetor B[%d]",i);
        scanf("%d", &B[i]);
    }

    printf("Vetor C:\n");
    for(int i=0;i<10;i++){
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }

}
