/*Programa para verificar se a nota de cada aluno esta acima da media da turma*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int tamanho_vetor = 10;

    float notas[tamanho_vetor];

    float media = 0;

    //i = contador, conta a quandtidade de repetições
    // vetor notas = [p0 p1 p2 p3 p4 p5 p6 p7 p8 p9]

    for(int i=0;i<tamanho_vetor;i++){
        printf("Escreva a nota do aluno [%d]:\n", i);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    media = media/tamanho_vetor;

    for(int i=0;i<tamanho_vetor;i++){
        if(notas[i]>media){
            printf("A nota do aluno %d eh maior que a media = %f\n", i, notas[i]);
        }else{
        }
   }
}
