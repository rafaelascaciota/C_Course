/*Leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação for maior que 20% do salário imprima:
Empréstimo não concedido, caso contrário imprima: Empréstimo
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
