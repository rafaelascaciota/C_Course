/*Escreva um programa que escreva na tela, de 1 ate 100, de 1 em
1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a
segunda while, e a terceira do while.*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    printf("Imprimindo utilizando o FOR\n");

    for(int i=1;i<=100;i++){
        printf("%d\n", i);
    }

    printf("\n");
    printf("Imprimindo utilizando o WHILE\n");

    int j = 1;
    while(j<=100){
        printf("%d\n", j);
        j = j+1;
    }

    printf("\n");
    printf("Imprimindo utilizando o DO-WHILE\n");

    int k = 1;
    do{
        printf("%d\n", k);
        k = k+1;
    }while(k<=100);


}
