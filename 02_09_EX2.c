/*Leia o sal�rio de um trabalhador e o valor da presta��o de um
empr�stimo. Se a presta��o for maior que 20% do sal�rio imprima:
Empr�stimo n�o concedido, caso contr�rio imprima: Empr�stimo
concedido.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float salario;
    float prestacao;
    float avalia;

    printf("Digite qual e o valor do seu salario:\n");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao do emprestimo:\n");
    scanf("%f", &prestacao);

    avalia = salario*0.2;

    if(avalia<prestacao){
        printf("Emprestimo nao consedido\n");
    }else{
        printf("Emprestimo consedido\n");
    }

}
