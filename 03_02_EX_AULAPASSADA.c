/*Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, apresente na saída o valor correspondente
em dólares.*/

// \

#include<stdio.h>
#include<stdlib.h>

int main(){

    //%f = numeros reais [0 0.5 3.6 ... 12.58]
    //%d = numeros inteiros [0 3 4 ... 12]

    float reais;
    float dolar;
    float recebido;

    printf("Quantos reais ele quer transformar em dolar:\n");
    scanf("%f", &reais);

    printf("Qual e o valor do dolar comercial de hoje:\n");
    scanf("%f", &dolar);

    recebido = reais/dolar;
    printf("O cliente ira receber %.2f US$. \n", recebido);
}
