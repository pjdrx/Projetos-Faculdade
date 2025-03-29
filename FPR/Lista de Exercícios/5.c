/*Implementar uma função que, dada uma matriz  Mm×n, gere um vetor V de tamanho n, onde  cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o  elemento V[0] consiste na soma dos elementos  da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda  coluna de M, e assim por diante. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencheMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = rand() % 100;
        }
    }
}
void imprimeMatriz(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf ("%02d ",matriz[i][j]);
        }
        printf ("\n");
    }
}
void somaColuna (int linha, int coluna, int matriz [linha][coluna], int soma[coluna]){
    for (int j = 0; j < coluna; j++){
        soma[j] = 0;
    }
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            soma[j] += matriz[i][j];
        }
    }
}
int main (){
    int linha = 5, coluna = 5;
    int matriz[linha][coluna];
    int soma[coluna];
    srand (time(NULL));
    preencheMatriz(linha,coluna,matriz);
    imprimeMatriz(linha,coluna,matriz);
    somaColuna (linha,coluna,matriz,soma);

    printf ("Soma das colunas: ");
    for (int j = 0; j < coluna; j++){
        printf ("%d ", soma[j]);
    } 
    return 0;
}
