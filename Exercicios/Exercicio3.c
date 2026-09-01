# include <stdio.h>
# include <stdlib.h>

int  decidir_tamMatriz(int linhas_colunas) {
    printf("Digite um numero para o tamanho da matriz quadrada: ");
    scanf("%d", &linhas_colunas);  
    printf("\n");   
    return linhas_colunas;
}

int valores_matriz(int linhas_colunas, int matriz_quadrada[linhas_colunas][linhas_colunas]) {
    int soma_diagonal_secundaria = 0;
    int i, j, c, u, l, k;
    for (i=0; i<linhas_colunas; i++) {
        for (j=0; j<linhas_colunas; j++) {
            printf("Digite o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz_quadrada[i][j]);
        }
    }
    printf("\n");

    for (c=0; c<linhas_colunas; c++) {
        for (u=0; u<linhas_colunas; u++) {
            printf("%d ", matriz_quadrada[c][u]);
        }
        printf("\n");
    }

    for (l=0; l<linhas_colunas; l++) {
        for (k=linhas_colunas-1; l<linhas_colunas; l++, k--) {
            soma_diagonal_secundaria += matriz_quadrada[l][k];
        }
    }
    return soma_diagonal_secundaria;
}

int main () {
    int linhas_colunas = decidir_tamMatriz(linhas_colunas);
    int matriz_quadrada[linhas_colunas][linhas_colunas];

    int matriz_resultado = valores_matriz(linhas_colunas, matriz_quadrada);
    printf("A soma dos numeros na diagonal secundaria eh igual a %d", matriz_resultado);
    printf("\n");
    return 0;
}o