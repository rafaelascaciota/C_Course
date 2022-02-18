//Calcule o fatorial de um número apresentado pelo usuário

#include<stdlib.h>
#include<stdio.h>

int main(){

    int numero;
    int fatorial = 1;

    printf("Escolha um numero para o calculo do fatorial\n");
    scanf("%d", &numero);

    for(int i=1; i<=numero; i++){
        //printf("Volta: %d\n", i);
        fatorial = fatorial*i;
        //printf("Fatorial: %d\n\n", fatorial);
    }
    printf("O fatorial de %d eh: %d", numero, fatorial);
}
