/*Jogo de Adivinhação
feito na disciplina de PSM
 prog: Rafaela Scaciota*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//definir uma constante
#define num_max 100
#define num_min 0

//stdio.h é uma biblioteca de input e output

int main(){
    printf("*****************************************\n");
    printf("***Bem-vindo(a) ao Jogo de Adivinhacao***\n");
    printf("*****************************************\n");

    //numero de segundos passados desde janeiro/70 ate o momento
    int segundos = time(0);
    srand(segundos);

    //numero randomico(aleatorio)
    int n_grad = rand();
    int chute;
    int numerosecreto;
    int teste;

    //achando um numero entre 0 e 100
    //numerosecreto = n_grad/100;
    numerosecreto = n_grad%100;

    //printf("segundos %d\n", segundos);
    printf("numero secreto %d\n", numerosecreto);


    printf("Qual eh o seu chute?\n");
    scanf("%d", &chute);

    //printf("O numero secreto eh: %d\n", numerosecreto);
    //printf("O chute foi: %d\n", chute);
    //if = se
    //else = caso contrario(vulgo se nao)

    if(chute>num_min && chute<num_max){

        if(chute==numerosecreto){
            //acertei o valor do numero secreto
            printf("Parabens, voce acertou o numero secreto.\n");

        }else if(chute>numerosecreto){
            //chute maior que numero secreto
            printf("O numero que voce chutou e maior que o numero secreto\n");
            printf("Voce errou, tente novamente...\n");

        }else{
            //chute menor que o numero secreto
            printf("O numero que voce chutou e menor que o numero secreto\n");
            printf("Voce errou, tente novamente...\n");
        }

    }else{

    printf("O numero escolhido para o chute nao e valido.\n");
    printf("ERROR\n");

    }
}


