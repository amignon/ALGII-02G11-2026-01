#include <stdio.h>
#include <string.h>

#define TAM (10)

typedef struct {
    int codigo;
    char nome[50];
    int idade;
    int gravidade;
} Paciente;

// implementa o bubble sort
void ordenaPorNome(Paciente pacientes[], int n) {
    Paciente temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(pacientes[j].nome, pacientes[j+1].nome) > 0) {
                temp = pacientes[j];
                pacientes[j] = pacientes[j+1];
                pacientes[j+1] = temp;
            }
        }
    }
}

// implementa o selection sort (decrescente)
void ordenaPorGravidade(Paciente pacientes[], int n) {
    Paciente temp;
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (pacientes[j].gravidade > pacientes[max_idx].gravidade) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            temp = pacientes[max_idx];
            pacientes[max_idx] = pacientes[i];
            pacientes[i] = temp;
        }
    }
}

void imprimePacientes(Paciente pacientes[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%3d | %-18s | %2d | %3d\n",
            pacientes[i].codigo, pacientes[i].nome,
            pacientes[i].idade, pacientes[i].gravidade
        );
    }
}



int main() {
    Paciente pacientes[TAM] = {
        {101, "Ana Paula", 45, 85},
        {102, "Carlos Eduardo", 60, 92},
        {103, "Fernanda Lima", 33, 76},
        {104, "Joao Marcos", 70, 98},
        {105, "Luciana Alves", 55, 88},
        {106, "Bruno Rocha", 40, 69},
        {107, "Marta Silva", 28, 58},
        {108, "Rafael Tavares", 38, 73},
        {109, "Juliana Costa", 49, 91},
        {110, "Roberto Teixeira", 65, 94}
    }; 
    printf("=== ORDENADO POR NOME ===\n");
    ordenaPorNome(pacientes, TAM);
    imprimePacientes(pacientes, TAM);
    printf("=== ORDENADO POR GRAVIDADE ===\n");
    ordenaPorGravidade(pacientes, TAM);
    imprimePacientes(pacientes, TAM);
}










/*
Paciente pacientes[TAM] = {
        {101, "Ana Paula", 45, 85},
        {102, "Carlos Eduardo", 60, 92},
        {103, "Fernanda Lima", 33, 76},
        {104, "Joao Marcos", 70, 98},
        {105, "Luciana Alves", 55, 88},
        {106, "Bruno Rocha", 40, 69},
        {107, "Marta Silva", 28, 58},
        {108, "Rafael Tavares", 38, 73},
        {109, "Juliana Costa", 49, 91},
        {110, "Roberto Teixeira", 65, 94}
    };
*/