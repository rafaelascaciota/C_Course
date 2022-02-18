/*Faça um programa que receba a altura e o sexo de uma
pessoa e calcule e mostre seu peso ideal, utilizando as
seguintes fórmulas (onde h corresponde a altura):
- Homens: (72.7 · h) − 58
- Mulheres: (62, 1 · h) − 44, 7*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    //int --> %d
    //float --> %f
    char sexo; //%s ou %c
               //MASCULINO =! masculino =! Masculino
               //M =! m
               //c = leitura de um caracter
               //s = leitura de mais que um caracter
    float altura;
    float peso_ideal;

    printf("Escreva M para calcular o peso ideal de um homem e F para calcular o peso ideal de uma mulher\n");
    scanf("%s", &sexo);

    printf("Escreva a altura para o calculo do peso ideal\n");
    scanf("%f", &altura);

    /*- Homens: (72.7 · h) − 58
    - Mulheres: (62, 1 · h) − 44, 7*/

    //  || ---> OU
    //  && ---> E
    //  == ---> IGUAL - MESMO CARACTERE
    //  =! ---> DIFERENTE

    if(sexo=='M' || sexo=='m'){
        peso_ideal = (72.7*altura) - 58;
        printf("O peso ideal para um Homem com altura %.2f eh: %.2f\n", altura, peso_ideal);
    }else if(sexo=='F' || sexo=='f'){
        peso_ideal = (62.1*altura) - 44.7;
        printf("O peso ideal para uma Mulher com altura %.2f eh: %.2f\n", altura, peso_ideal);
    }else{
        printf("Voce escreveu o caractere errado. Tente novamente. E leia o que esta escrito acima.\n");
    }

}
