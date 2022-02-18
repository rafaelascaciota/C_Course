/*Faça um programa para ler a nota da prova de 15 alunos e
armazene num vetor, calcule e imprima a media geral.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float notas[15], media = 0;

    for(int i=0;i<15;i++){
        printf("Apresente a nota do aluno:\n");
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }

    media = media/15;
    printf("A media geral da turma nesta prova foi: %f", media);

}
