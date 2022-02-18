/*Jogo de Adivinhação
feito na disciplina de PSM
 prog: Rafaela Scaciota*/

#include<stdio.h>
//stdio.h é uma biblioteca de input e output

int main(){
    printf("*****************************************\n");
    printf("***Bem-vindo(a) ao Jogo de Adivinhacao***\n");
    printf("*****************************************\n");

    int numerosecreto = 27;
    int chute;

    printf("Qual eh o seu chute?\n\n");
    scanf("%d", &chute);

    //printf("O numero secreto eh: %d\n", numerosecreto);

    printf("O chute foi: %d\n", chute);
    printf("Parabens, voce acertou o numero secreto.\n");
    printf("Voce errou, tente novamente...\n");

}


