/*Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus
elementos são da forma:
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i2 − 1 se i = j;
A[i][j] = 4i3 − 5j2 + 1 se i > j.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int A[10][10];
    //a[linha][coluna]
    /*a = a[0][0] a[0][1] 2 3 4 5 6 7 8 a[0][10]
          a[1][0]    1    2 3 4 5 6 7 8 a[1][10]
            0        1    2 3 4 5 6 7 8    9
            0        1    2 3 4 5 6 7 8    9
            0        1    2 3 4 5 6 7 8    9
            0        1    2 3 4 5 6 7 8    9
            0        1    2 3 4 5 6 7 8    9
            0        1    2 3 4 5 6 7 8    9
            0        1    2 3 4 5 6 7 8 a[10][10]*/


    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            //3 > 2
            //4*(3*3*3) - 5*(2*2) = 108 - 20 = 88 +1
            if(i<j){
                A[i][j] = 2*i + 7*j -2;
            }else if(i == j){
                A[i][j] = 3*(i*i) -1;
            }else{
                A[i][j] = 4*(i*i*i) - 5*(j*j) +1;
            }
            printf("%d ", A[i][j]);

        }
            printf("\n");
    }
}
