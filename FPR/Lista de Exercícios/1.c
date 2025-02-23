/*Faça uma função que, dada uma matriz Mm×n de reais, gere a matriz Mt, sua transposta.*/
#include <stdio.h>
int main()
{
    int m = 5, n = 4;
    int M[m][n];
    int MT[n][m];
    printf ("Digite os valores da Matriz Original  M [%d][%d]: \n", m,n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf ("Digite M[%d][%d]\n", i,j);
            scanf("%d", &M[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Transposta \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            MT[i][j] = M[j][i];
            printf("%d ", MT[i][j]);
        }
        printf("\n");
    }
    return 0;
}
