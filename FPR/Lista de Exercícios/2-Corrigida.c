/*Desenvolver uma função que, dada uma matriz  Mm×n, determine se um número X se encontra  na linha L da matriz. */
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
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf ("%02d ", matriz[i][j]);
        }
        printf ("\n");
    }
}
int buscaNumeroLinha (int numero, int linhaProcurada, int coluna, int matriz[linhaProcurada][coluna]){
    for (int j = 0; j < coluna; j++){
        if (matriz[linhaProcurada][j] == numero){
            return 1;
        }
    }
    return 0;
}
int main (){

    int numero, linhaProcurada;
    int linha = 5, coluna = 4;
    int matriz[linha][coluna];
    
    srand(time(NULL));
    preencheMatriz(linha,coluna,matriz);
    imprimeMatriz(linha,coluna,matriz);

    printf ("Digite o número a ser procurado na matriz: ");
    scanf ("%d",&numero);

    printf("Digite a linha para ser feita a busca (0 a %d): ", linha - 1);
    scanf ("%d",&linhaProcurada);

    if (linhaProcurada < 0 || linhaProcurada >= linha){
        printf ("Linha inválida");
    }
    else {
        if (buscaNumeroLinha(numero, linhaProcurada, coluna, matriz)){
            printf("O número %d foi encontrado na linha %d.\n",numero, linhaProcurada);
        }
        else {
            printf ("Número não encontrado.");
        }
    }
    return 0;
}
