/*Escreva um programa que escreva na tela, de 1 ate 100, de 1 em
1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a
segunda while, e a terceira do while.*/

#include<stdio.h>
#include<stdlib.h>

int main (){

    printf("Impimindo de 1 a 100 usando (for)\n");

    // Lembrando que i++ eh igual a i = i+1
    // for(apresentando a variavel, condicao final, incremento[passo])
    for(int i = 1; i<=100;i++){
        printf("%d\n", i);
    }

    printf("Impimindo de 1 a 100 usando (while)\n");
    int j = 1;
    while(j<=100){
        printf("%d\n", j);
        j = j+1;
    }

    printf("Impimindo de 1 a 100 usando (do while)\n");
    int k = 1;
    do{
        printf("%d\n", k);
        k = k+1;
    }while(k<=100);
}
