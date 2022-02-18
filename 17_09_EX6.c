/*Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus
elementos são da forma:
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i*i − 1 se i = j;
A[i][j] = 4i*i*i − 5j*j + 1 se i > j.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    //A[quant_linhas][quant_colunas]
    float A[10][10];

    printf("Matriz A:\n");

    //a[0][0] a[0][1] a[0][2]
    //a[1][0] a[1][1] a[1][2]
    //a[2][0] a[2][1] a[2][2]

    //A[2][3] = 2*2 + 7*3 -2= 4 +21 -2= 23

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
                if(i < j){
                //A[i][j] = 2i + 7j − 2 se i < j;
                //A[i][j] = 3i*i − 1 se i = j;
                //A[i][j] = 4i*i*i − 5j*j + 1 se i > j.*/

                    A[i][j]=2*i+7*j-2;
                }else if(i == j){

                    A[i][j]=3*(i*i)-1;

                }else{

                    A[i][j]=4*(i*i*i)-5*(j*j)+1;

                }
            printf("%.1f ",A[i][j]);
        }
        printf("\n");
    }

}
