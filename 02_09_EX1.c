/*Faça um programa que receba um número inteiro e verifique se
este número é par ou ímpar.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;
    int resto;

    printf("Coloque um numero para verificar se o mesmo e par ou impar:\n");
    scanf("%d", &numero);

    resto = numero%2; //estou verificando qual eh o valor do resto da divisao

    if(resto==0){
        printf("O numero %d e par", numero);

    }else{
        printf("O numero %d e impar", numero);
    }

}
