#include <stdio.h>

int produto(int a, int b) {
    if (b == 1)
        return a;
    return produto(a, b - 1) + a;
}

int main() {
    int n1, n2;
    printf("Valor 1: ");
    scanf("%d", &n1);
    printf("Valor 2: ");
    scanf("%d", &n2);
    int p = produto(n1, n2);
    printf("Produto: %d\n", p);
    return 0;
}