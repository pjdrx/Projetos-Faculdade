/*Desenvolver uma função que gere uma matriz  Mn×n, nos moldes do exemplo apresentado a  seguir (que consiste em uma matriz de ordem  5) 
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencheMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = i+j+1;
        }
    }  
}
void imprimeMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf ("%02d ", matriz[i][j]);
        }
        printf ("\n");
    }
}
int main (){
    int linha = 5, coluna = 5;
    int matriz[linha][coluna];
    preencheMatriz (linha,coluna,matriz);
    imprimeMatriz(linha,coluna,matriz);
}
