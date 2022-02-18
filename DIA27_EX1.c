/*Peça ao usuário para digitar três valores inteiros
e imprima a soma deles.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1;
    int n2;
    int n3;
    int soma;

    printf("Digite 3 numeros para serem somados.\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    soma = n1+n2+n3;

    printf("O resultado da soma eh: %d\n", soma);
}
