/*Desenvolver uma função que, dada uma matriz Mm×n, determine se um número X se encontra na linha L da matriz.*/
#include <stdio.h>
int main (){
    int x,y,a;

    printf ("\nDefina a qtd de linhas: ");
    scanf ("%d",&x);
    printf ("\nDefina a qtd de colunas: ");
    scanf ("%d",&y);

    int M[x][y];

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            printf ("Digite M[%d][%d]\n", i,j);
            scanf ("%d",&M[i][j]);
        }
        printf ("\n");
    }
    printf ("\nDigite o valor a ser encontrado na matriz: ");
    scanf ("%d",&a);
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (M[i][j] == a){
                printf("\nValor encontrado no local M[%d][%d]", i, j);
                a = 1;
            }
        }
    }
    if (a != 1){
        printf ("Valor nao encontrado na matriz.");
    }
}
