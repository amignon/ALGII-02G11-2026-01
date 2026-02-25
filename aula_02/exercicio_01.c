#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int computador = rand() % 3 + 1;
    int usuario;
    printf("1 - Pedra | 2 - Papel | 3 - Tesoura: ");
    scanf("%d", &usuario);
    printf("Usuário: %d x Computador: %d\n", usuario, computador);
    if (usuario == 1 && computador == 3
        || usuario == 3 && computador == 2
        || usuario == 2 && computador == 1) {
        printf("Você venceu!\n");
    }
    else if (usuario == computador) {
        printf("Empate\n");
    }
    else {
        printf("Computador venceu\n");
    }
    return 0;
}