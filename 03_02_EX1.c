/*Fa�a um programa que receba um n�mero inteiro e verifique se
este n�mero � par ou �mpar.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;
    int resto;

    printf("Digite um numero para saber se o mesmo e par ou impar\n");
    scanf("%d", &numero);

    resto = numero%2;

    if(resto==0){
        printf("O numero %d e PAR\n", numero);
    }else{
        printf("O numero %d e IMPAR\n", numero);
    }

}
