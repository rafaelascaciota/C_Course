/*Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, apresente na saída o valor correspondente em dólares.*/
//programa desenvolvido por: Prof.

#include<stdlib.h>
#include<stdio.h>


int main(){
    //espaço onde escrevo o programa
    float reais;
    float dolar;
    float convert;

    printf("Apresente em reais o valor que deve ser convertido para dolar:\n");
    scanf("%f",&reais);

    printf("Quanto esta o dolar hoje:\n");
    scanf("%f",&dolar);

    convert = reais/dolar;
    printf("Voce tera %.2f US$", convert);
}
