/*Faça um programa para ler a nota da prova de 15 alunos e
armazene num vetor, calcule e imprima a media geral.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    float notas[15], media = 0;
    //i++ = i + 1
    for(int i=1;i<15;i++){

        printf("Escreva a nota do aluno da posicao [%d]: \n",i);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    media = media/15;

    printf("A media da turma eh: %f", media);
}
