#include <stdio.h>
#include <stdlib.h>

int receber_linhas(int tam_linhas) {
    printf("Digite um numero para o numero de linhas da matriz: ");
    scanf("%d", &tam_linhas);    
    return tam_linhas;
}

int receber_colunas(int tam_colunas) {
    printf("Digite um numero para o numero de colunas da matriz: ");
    scanf("%d", &tam_colunas);
    return tam_colunas;
}

void coletar_numeros(int tam_linhas, int tam_colunas, int matriz[tam_linhas][tam_colunas]) {
    int i, j;
    for (i=0; i<tam_linhas; i++) {
        for (j=0; j<tam_colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
}

void definir_matriz_transposta(int tam_linhas, int tam_colunas, int matriz[tam_linhas][tam_colunas], int matriz_transposta[tam_colunas][tam_linhas]) {
    int c, k, u, l;
    for (c=0; c<tam_linhas; c++) {
        for (k=0; k<tam_colunas; k++) {
            matriz_transposta[c][k] = matriz[k][c];
        }
    }
    for (u=0; u<tam_linhas; u++) {
        for (l=0; l<tam_colunas; l++) {
            printf("%2d ", matriz_transposta[u][l]);
        }
    printf("\n");
    }
}

int main() {
    int tam_linhas = receber_linhas(tam_linhas);
    int tam_colunas = receber_colunas(tam_colunas);

    int matriz[tam_linhas][tam_colunas];
    int matriz_transposta[tam_colunas][tam_linhas];

    coletar_numeros(tam_linhas, tam_colunas, matriz);
    definir_matriz_transposta(tam_linhas, tam_colunas, matriz, matriz_transposta);
    printf("\n");
    return 0;
}
