/*Faça um programa que preencha um vetor com 10 números reais,
calcule e mostre a quantidade de números negativos e a soma dos
números positivos desse vetor.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    float vetor[10], positivo=0;
    int negativo=0;

    for(int i=0;i<10;i++){
        printf("Escreva o numero da posicao [%d] do vetor:\n",i);
        scanf("%f", &vetor[i]);

        if(vetor[i]>0){

            positivo = positivo + vetor[i];

        }else{
            negativo = negativo + 1;
        }
    }

    printf("A soma dos numeros positivos eh: %f\n",positivo);
    printf("A quantidade de numeros negativo eh:%d\n",negativo);

}
