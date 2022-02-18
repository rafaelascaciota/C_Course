/*Faça um programa que receba dois números. Calcule e mostre:
- a soma dos números pares desse intervalo de números, incluindo os
números digitados;
- a multiplicação dos números ímpares desse intervalo, incluindo os
digitados;*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1, n2, verifica;
    int sum = 0;
    int mul = 1;

    printf("Digite dois numeros quaisquer:\n");
    scanf("%d %d", &n1, &n2);

    if(n1>n2){
        for(n2; n2<=n1;n2++){     // repetir o programa ate o valor do n2 ser maior que o valor do n1
            verifica = n2%2;     // calcular o resto da divisao e guardar na variavel verifica
            //printf("n1: %d\n", n1);
            //printf("n2: %d\n", n2);
            if(verifica==0){     // se o resto da divisao for 0 este eh um numero par
                sum = sum + n2;  // soma numeros pares
                //printf("somatorio: %d\n", sum);
            }else{               // caso o resto da divisao seja diferente de 0 este eh um numero impar
                mul = mul*n2;    // multiplicar os numeros impares
                //printf("multiplicacao: %d\n", mul);
            }
        }
    }else{
        for(n1; n1<=n2;n1++){     // repetir o programa ate o valor do n2 ser maior que o valor do n1
            verifica = n1%2;     // calcular o resto da divisao e guardar na variavel verifica
            //printf("n1: %d\n", n1);
            //printf("n2: %d\n", n2);
            if(verifica==0){     // se o resto da divisao for 0 este eh um numero par
                sum = sum + n1;  // soma numeros pares
                //printf("somatorio: %d\n", sum);
            }else{               // caso o resto da divisao seja diferente de 0 este eh um numero impar
                mul = mul*n1;    // multiplicar os numeros impares
                //printf("multiplicacao: %d\n", mul);
            }
        }

    }
    printf("O somatorio dos numeros pares eh: %d\n", sum);
    printf("A multiplicacao dos numeros impares eh: %d\n", mul);
}
