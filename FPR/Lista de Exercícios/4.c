/*Fazer uma função que, dada uma matriz Mn×n,  determine se ela é simétrica. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
           // matriz[i][j] = rand() %100;
           matriz [i][j] = +1;
        }
    }
}
void imprimeMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf ("%02d ",matriz[i][j]);
        }
        printf ("\n");
    }
}
int verificaSimetria (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = i + 1; j < coluna; j++){
            if (matriz[i][j] != matriz[j][i]){
                return 0;
            }
        }
    }
    return 1;
}
int main (){
    int linha = 5, coluna = 5;
    int matriz[linha][coluna];

    srand(time(NULL));
    preencheMatriz(linha,coluna,matriz);
    imprimeMatriz(linha,coluna,matriz);

    if (verificaSimetria(linha,coluna,matriz)){
        printf ("A matriz é simétrica.");
    } else {
        printf ("A matriz não é simétrica.");
    }
}