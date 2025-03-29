/*Faça uma função que, dada uma matriz Mm×n dereais, gere a matriz Mt, sua transposta.*/
/*Matriz transposta de M[m][n] = M[n][m]*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencheMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = rand() %100;
        }
    }
}
void imprimeMatriz (int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0;i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
}
void geraTransposta (int linha, int coluna, int matriz[linha][coluna], int transpota [coluna][linha]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            transpota [j][i] = matriz [i][j];
        }
    }
}
int main (){
    int linha = 5, coluna = 4;
    int matriz[linha][coluna];
    int transposta[coluna][linha];

    srand(time(NULL));
    
    preencheMatriz(linha,coluna,matriz);
    
    printf ("Matriz: \n");
    imprimeMatriz (linha,coluna,matriz);

    printf ("Matriz Transposta: \n");
    geraTransposta(linha,coluna,matriz,transposta);
    imprimeMatriz(coluna,linha,transposta);
    return 0;
}