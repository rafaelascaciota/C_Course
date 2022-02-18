/*Notas dos alunos de uma turma com 20 aluno */

#include<stdio.h>
#include<stdlib.h>

int main(){
    float notas[10]; //vetor de notas [n1 n2 n3 n4 n5 n6 n7... n20]
    float media = 0;
    //[0 1 2 3 4 5 ... 99]

    for(int i=0;i<=9;i++){
        printf("Digite a nota do aluno[%d]:\n", i);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    media = media/10;
    printf("A media das notas eh: %f\n", media);
    for(int j=0;j<=9;j++){
       //printf("nota da posicao %d do vetor notas: %f\n",j,notas[j]);

       if(notas[j]>=media){
            printf("nota da posicao %d eh maior que a media: %f\n",j,notas[j]);
       }else{
       }
    }

}
