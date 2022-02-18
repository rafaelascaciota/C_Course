/*Leia uma temperatura em graus Fahrenheit e apresente-a
convertida em graus Celsius. A fórmula de conversão é:
C = 5*(F−32)/9, sendo C a temperatura em Celsius e F a
temperatura em Fahrenheit.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int F;
    int C;

    printf("Escreva uma temperatura em Fahrenheit:\n");
    scanf("%d", &F);

    C = (5*(F-32))/9;

    printf("A temperatura em graus celsius eh: %d", C);
}
