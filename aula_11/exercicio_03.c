#include <stdio.h>

int soma(int vetor[], int n) {
    if (n == 0)
        return 0;
    return soma(vetor, n - 1) + vetor[n - 1];
}

int main() {
    int vetor[7] = {1, 2, 3, 4, 6, 8, 9};
    int s = soma(vetor, 7);
    printf("Soma = %d\n", s);
    return 0;
}