#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 3

bool verificar_matriz_diagonal(int matriz[TAM][TAM]) {
    int i, j;
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main () {
    int matriz[TAM][TAM] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    bool matriz_diagonal = verificar_matriz_diagonal(matriz);
    printf("%s\n", matriz_diagonal ? "true" : "false");
    return 0;
}