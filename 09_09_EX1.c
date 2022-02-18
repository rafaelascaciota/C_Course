//Calcule o fatorial de um número apresentado pelo usuário.

#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;
    int fatorial = 1;

    printf("Escreva o numero que deseja descobrir o fatorial:\n");
    scanf("%d", &numero);

    if(numero>0){
        while(numero>0){

            fatorial = fatorial*numero;
            printf("fatorial %d\n", fatorial);
            numero = numero - 1;
            printf("numero %d\n", numero);

        }
    }else if(numero==0){
        printf("O fatorial do numero %d e igual a %d", numero, fatorial);
    }else{
        printf("Nao e possivel calcular o fatorial de numeros menores do que 0.");
    }
}
