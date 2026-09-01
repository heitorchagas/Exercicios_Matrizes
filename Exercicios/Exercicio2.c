# include <stdio.h>
# include <stdlib.h>

void receber_matriz(int linhas_colunas, int matriz_quadrada[linhas_colunas][linhas_colunas]) {
    int i, j, c, k;
    for(i=0; i<linhas_colunas; i++) {
        for (j=0; j<linhas_colunas; j++) {
            printf("Digite o elemento [%d] [%d]: ", i, j);
            scanf("%d", &matriz_quadrada[i][j]);
        }
    }
    printf("\n");
    for (c=0; c<linhas_colunas; c++) {
        for (k=0; k<linhas_colunas; k++) {
            printf("%d ", matriz_quadrada[c][k]);
        }
    printf("\n");
    }
}

int soma_diagonal_principal(int linhas_colunas, int matriz_quadrada[linhas_colunas][linhas_colunas]) {
    int soma_diagonal = 0;
    int l;
    for (l=0; l<linhas_colunas; l++) {
        soma_diagonal += matriz_quadrada[l][l];
    }
    return soma_diagonal;
}

int main() {
    int linhas_colunas;
    printf("Digite um número para definir a matriz quadrada: ");
    scanf("%d", &linhas_colunas);

    int matriz_quadrada[linhas_colunas][linhas_colunas];

    receber_matriz(linhas_colunas, matriz_quadrada);
    int resultado_soma = soma_diagonal_principal(linhas_colunas, matriz_quadrada);
    printf("\nA soma da diagonal principal eh igual a: %d", resultado_soma);
    printf("\n");
    return 0;
}