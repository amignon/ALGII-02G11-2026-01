#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
    char nome[50];
    double peso;
    double altura;
} Pessoa;

double calculaIMC(Pessoa p) {
    double imc = p.peso / pow(p.altura, 2);
    return imc;
}

void imprimePessoa(Pessoa p) {
    printf("Nome: %-15s |", p.nome);
    printf("Peso: %.1lf |", p.peso);
    printf("Altura: %.2lf |", p.altura);
    double imc = calculaIMC(p);
    printf("IMC: %.2lf\n", imc);
}

int main() {
    Pessoa umaPessoa;
    // lê os dados da pessoa
    printf("Nome: ");
    fgets(umaPessoa.nome, sizeof(umaPessoa.nome), stdin);
    umaPessoa.nome[strcspn(umaPessoa.nome, "\n")] = '\0';
    printf("Peso: ");
    scanf("%lf", &umaPessoa.peso);
    printf("Altura: ");
    scanf("%lf", &umaPessoa.altura);

    imprimePessoa(umaPessoa);
    
}