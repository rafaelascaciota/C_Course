/*Faça um programa que receba dois números. Calcule e mostre:
- a soma dos números pares desse intervalo de números, incluindo os
números digitados;
- a multiplicação dos números ímpares desse intervalo, incluindo os
digitados;*/

#include<stdlib.h>
#include<stdio.h>

int main(){
    /*n1<n2
    5 12
    n1>n2
    12 5
    5 6 7 8 9 10 11 12

    soma = 6+8+10+12 = 36;
    multiplica = 5*7*9*11 = 3465;*/

    int n1, n2, resto;
    int soma = 0;
    int multiplica = 1;

    printf("Escreva dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1<n2){
        for(int i=n1;i<=n2;i++){
            resto = i%2;
            //printf("numero %d\n", i);
            if(resto==0){
                soma = soma+i;
                //printf("soma %d\n", soma);
            }else{
                multiplica = multiplica*i;
                //printf("multiplicacao %d\n", multiplica);
            }
        }
    }else{
    for(int i=n2;i<=n1;i++){
            resto = i%2;
            //printf("numero %d\n", i);
            if(resto==0){
                soma = soma+i;
                //printf("soma %d\n", soma);
            }else{
                multiplica = multiplica*i;
                //printf("multiplicacao %d\n", multiplica);
            }
        }
    }
    printf("O resultado da soma dos numeros pares eh: %d\n", soma);
    printf("O resultado da multiplicacao dos numeros impares eh: %d\n", multiplica);
}


