#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("Digite um número: ");
    int numero;
    scanf("%d", &numero);
    int dobro = numero * 2;
    printf("Dobro = %d\n", dobro);
    return 0;
}