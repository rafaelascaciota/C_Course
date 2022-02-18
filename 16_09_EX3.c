/*Faça um programa que preencha um vetor com 10 números reais,
calcule e mostre a quantidade de números negativos e a soma dos
números positivos desse vetor.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float vetor[10], positivos = 0;
    int negativos = 0;

    for(int i=0;i<10;i++){
        printf("Escreva o numero do vetor:\n");
        scanf("%f", &vetor[i]);

        if(vetor[i]>=0){
            positivos = positivos + vetor[i];
            printf("Positivos: %f\n", positivos);
        }else{
            negativos = negativos + 1;
            printf("negativos: %d\n", negativos);
        }
    }
    printf("A soma dos numeros positivos eh igual a: %f\n", positivos);
    printf("A quantidade de numeros negativos eh: %d\n", negativos);
}
