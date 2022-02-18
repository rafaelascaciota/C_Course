/*Atribuiçao de valores"*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int v1[5] = {4,2,8,5,1};
    int v2[5];
    int x = 2, y;
    y = x;
    //v1 = v2;
    //printf("O vetor v2 eh %d:\n", v2);
    for(int i=0;i<5;i++){
        v2[i] = v1[i];
        printf("Na posicao [%d], v1 = %d, v2 = %d:\n", i, v1[i], v2[i]);
    }
}
