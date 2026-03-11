#include <stdio.h>
#define TAMANHO (7)

void imprime(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%3d ", vetor[i]);
    }
    printf("\n");
}

void le(int vetor[], int tamanho) {
  for (int i = 0; i < TAMANHO; i++) {
        printf("Valor[%d]:", i);
        scanf("%d", &vetor[i]);
    }
}

int substitui(int vetor[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] >= 10 && vetor[i] <= 20) {
            vetor[i] = 0;
            contador++;
        }
    }
    return contador;
}

int main() {
    int numeros[TAMANHO];
    le(numeros, TAMANHO);
    imprime(numeros, TAMANHO);
    int substituicoes = substitui(numeros, TAMANHO);
    imprime(numeros, TAMANHO);
    printf("Quantidade de substituições: %d\n", substituicoes);
    return 0;
}