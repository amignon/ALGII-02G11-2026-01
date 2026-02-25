#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("Olá, mundo!\n");
    return 0;
}