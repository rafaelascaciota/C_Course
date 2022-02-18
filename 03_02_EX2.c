/*Leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação for maior que 20% do salário imprima:
Empréstimo não concedido, caso contrário imprima: Empréstimo
concedido.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float salario;
    float emprestimo;
    float parcela_max;

    printf("Quando e o salario do trabalhador:\n");
    scanf("%f", &salario);

    printf("Qual e o valor da parcela do emprestimo:\n");
    scanf("%f", &emprestimo);

    parcela_max = salario*0.2;

    if(parcela_max>=emprestimo){
        printf("Emprestimo Concedido\n");
    }else{
        printf("Emprestimo nao Concedido\n");
    }

}
