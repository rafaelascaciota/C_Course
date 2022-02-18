/*Um produto vai sofrer aumento de acordo com calcule e escreva o
preço novo, e escreva uma mensagem em função do preço novo (de
acordo com a segunda tabela).*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    float p_atual;
    float p_futuro;

    printf("Escreva o preco do produto:\n");
    scanf("%f", &p_atual);

    if(p_atual>0 && p_atual<50){
        //5% de aumento
        // 100% + 5% = 105% = 105/100 = 1.05
        p_futuro = 1.05*p_atual;
        printf("O preco futuro com aumento de 5 por cento eh: %.2f\n", p_futuro);
    }else if(p_atual>=50 && p_atual<=100){
        //10% de aumento
        p_futuro = 1.1*p_atual;
        printf("O preco futuro com aumento de 10 por cento eh: %.2f\n", p_futuro);
    }else if(p_atual>100){
        //15% de aumento
        p_futuro = 1.15*p_atual;
        printf("O preco futuro com aumento de 15 por cento eh: %f\n", p_futuro);
    }else{
        printf("Nao existem precos negativos para os produtos desta loja\n");
    }

}
