#include <stdio.h>

int main() {
    int numero; 
    do {
        printf("Número: ");
        scanf("%d", &numero);
        if (numero < 0) {
            printf("\tO número deve ser positivo.\n");
        }
    } while (numero < 0);
    
    int fatorial = 1;
    for (int cont = 2; cont <= numero; cont++) {
        fatorial *= cont; // fatorial = fatorial * cont
    }
    printf("Fatorial = %d\n", fatorial);
    
    return 0;
}