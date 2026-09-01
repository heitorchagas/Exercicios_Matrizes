# include <stdio.h>
# include <stdlib.h>
# include <time.h>


void receber_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j, k, u;
    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            matriz[i][j] = rand()%100+1;
        }
    }
    for (k=0; k<linhas; k++) {
        printf("Combinacao na linha %d: ", k+1);
        for (u=0; u<colunas; u++) {
            printf("%2d ", matriz[k][u]);
        }
        printf("\n");
    }
}

int verificarMaior(int linhas, int colunas, int matriz[linhas][colunas]) {
    int Maior = matriz[0][0];
    int c, j;
    for (c=0; c<linhas; c++) {
        for (j=0; j<colunas; j++) {
            if (matriz[c][j] > Maior) {
                Maior = matriz[c][j];
            }
        }
    }
    return Maior;
}

void imprimir_maior(int maior_matriz) {
    printf("O maior numero da matriz eh igual a: %d", maior_matriz);
    printf("\n");
}

int main () {
    srand(time(NULL));
    int linhas, colunas;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
    receber_matriz(linhas, colunas, matriz);
    int maior_matriz = verificarMaior(linhas, colunas, matriz);
    imprimir_maior(maior_matriz);
    return 0;
}