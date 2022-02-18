/* Faça um programa que receba a altura e o sexo de uma pessoa e
calcule e mostre seu peso ideal, utilizando as seguintes fórmulas
(onde h corresponde a altura): */


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    float altura;
    float peso;
    char sexo;


    printf("Escreva o seu sexo biologico:\n");
    printf("M: Masculino; F: Feminino\n");
    scanf("%s", &sexo);

    printf("Escreva sua altura:\n");
    scanf("%f", &altura);


    if(sexo == 'M' || sexo == 'm'){

        peso = (72.7*altura) - 58;
        printf("E o peso ideal e: %.2f\n", peso);

    }else if(sexo == 'F' || sexo == 'f'){

        peso = (62.1*altura) - 44.7;
        printf("E o peso ideal e: %.2f\n", peso);

    }else{

     printf("Entrada incorreta\n");
     printf("Faca novamente\n");
    }


}
