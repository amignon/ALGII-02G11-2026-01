#include <stdio.h>

int contar_especiais(char texto[], int indice) {
    if (texto[indice] == '\0') {
        return 0;
    }
    char c = texto[indice];
    if (c == '!' || c == '@' || c == '#' || c == '$' 
        || c == '%' || c == '&' || c == '*') {
        return contar_especiais(texto, indice + 1) + 1;
    }
    return contar_especiais(texto, indice + 1);
}


int main() {
    char frase[101];
    printf("Frase: ");
    fgets(frase, 101, stdin);
    printf("%s", frase);

    int qtde_especiais = contar_especiais(frase, 0);
    printf("Quantidade de especiais: %d\n", qtde_especiais);
    return 0;
}