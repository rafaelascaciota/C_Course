/*Igualar vetores*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[5] = {1, 4, 7, 3, 9};
    int B[5];

    printf("Imprimir o vetor B:\n");
    for(int i=0;i<5;i++){
        B[i] = A[i];
        printf("%d ", B[i]);
    }

}
