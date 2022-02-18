/*Leia uma temperatura em graus Fahrenheit e apresente-a
  convertida em graus Celsius. A fórmula de conversão é:
  C = (5 · (F − 32)) / 9, sendo C a temperatura em Celsius
  e F a temperatura em Fahrenheit.*/


  #include<stdio.h>
  #include<stdlib.h>

  int main(){
    int C;
    int F;

    printf("Qual a temperatura em Fahrenheit que voce deseja obter em Celsius?\n");
    scanf("%d", &F);

    C = (5*(F-32))/9;

    printf("Esta temperatura em graus celsius eh: %d C\n", C);
  }
