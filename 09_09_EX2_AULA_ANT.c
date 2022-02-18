/*Um produto vai sofrer aumento de acordo com calcule e escreva o
preço novo, e escreva uma mensagem em função do preço novo (de
acordo com a segunda tabela).*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float valor;
    float ajuste;

    printf("Qual e o atual valor do produto:\n");
    scanf("%f", &valor);

    if(0<valor){
        if(valor<50){
            ajuste = 1.05*valor;
            printf("O ajuste foi de 5 por cento e o novo valor deste produto e %.2f\n", ajuste);

        }else if(50<=valor && valor<=100){
            ajuste = 1.1*valor;
            printf("O ajuste foi de 10 por cento e o  novo valor deste produto e %.2f\n", ajuste);

        }else{
            ajuste = 1.15*valor;
            printf("O ajuste foi de 15 por cento e o  novo valor deste produto e %.2f\n", ajuste);
        }
    }else{
        printf("O produto nao pode ter o preco negativo.");
    }


}
