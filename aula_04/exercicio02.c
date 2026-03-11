#include <stdio.h>

float calcularMediaTurma(float notas[], int numeroEstudantes) {
    float soma = 0.0f;
    for (int i = 0; i < numeroEstudantes; i++) {
        soma += notas[i]; // soma = soma + notas[i];
    }
    return soma / numeroEstudantes;
}

void imprimirResultados(float notas[], int numerosEstudantes) {
    for (int i = 0; i < numerosEstudantes; i++) {
        if (notas[i] >= 7.0) {
            printf("Estudante #%02d: %s\n", i + 1, "Aprovado");
        }
        else {
            printf("Estudante #%02d: %s\n", i + 1, "Reprovado");
        }
    }
}

int main() {
    int numeroEstudantes;
    printf("Número de estudantes: ");
    scanf("%d", &numeroEstudantes);
    float notasEstudantes[numeroEstudantes];
    // leitura das notas
    for (int i = 0; i < numeroEstudantes; i++) {
        printf("Nota[%d]: ", i + 1);
        scanf("%f", &notasEstudantes[i]);
    }
    float mediaTurma = calcularMediaTurma(notasEstudantes, numeroEstudantes);
    printf("Média da turma: %.1f\n", mediaTurma);
    imprimirResultados(notasEstudantes, numeroEstudantes);
    return 0;
}