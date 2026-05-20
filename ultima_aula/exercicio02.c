#include <stdio.h>
#include <string.h>
#define MAX (3)

typedef struct {
    char nome[31];
    char especie[31];
    int idade;
    float peso;
} Animal;

void cadastra_animais(Animal animais[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nome: ");
        fgets(animais[i].nome, 30, stdin);
        animais[i].nome[strcspn(animais[i].nome, "\n")] = '\0';
        printf("Espécie: ");
        fgets(animais[i].especie, 30, stdin);
        animais[i].especie[strcspn(animais[i].especie, "\n")] = '\0';
        printf("Idade: ");
        scanf("%d", &animais[i].idade);
        printf("Peso: ");
        scanf("%f", &animais[i].peso);
        getchar();
    }
}

void exibe_animais(Animal animais[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%10s|%10s|%3d|%6.1f\n", animais[i].nome,
            animais[i].especie, animais[i].idade, 
            animais[i].peso);
    }
}

void exibe_mais_velho(Animal animais[], int n) {
    int indice_mais_velho = 0;
    for (int i = 0; i < n; i++) {
        if (animais[i].idade > animais[indice_mais_velho].idade) {
            indice_mais_velho = i;
        }
    }
    printf("%10s|%10s|%3d|%6.1f\n", 
            animais[indice_mais_velho].nome,
            animais[indice_mais_velho].especie, 
            animais[indice_mais_velho].idade, 
            animais[indice_mais_velho].peso);
}

void merge (Animal v1[], int n1, Animal v2[], int n2, Animal dest[]) {
    int i1 = 0; 
    int i2 = 0; 
    int i = 0;
    while (i1 < n1 && i2 < n2) {    
        if (v1[i1].peso > v2[i2].peso) {
            dest[i] = v1[i1];
            i1++;
        } else {
            dest[i] = v2[i2];
            i2++;
        }
        i++;
    }
    while(i1 < n1) {
        dest[i] = v1[i1];
        i1++; 
        i++;
    }
    while(i2 < n2) {
        dest[i] = v2[i2];
        i2++; 
        i++;
    }
}

void ordena_por_peso(Animal animais[], int n) {
    if (n < 2) return;
    int meio = n / 2;
    int n1 = meio;
    Animal v1[n1]; //cria v1 com o tamanho da primeira metade
    for (int i = 0; i < n1; i++) {
        v1[i] = animais[i]; //copia os dados do v para v1
    }
    int n2 = n - meio;
    Animal v2[n2]; //cria v2 com o tamanho da segunda metade
    for (int i = 0; i < n2; i++) {
        v2[i] = animais[meio + i]; //copia os dados do v para v2
    }   
    ordena_por_peso(v1, n1); //recursividade
    ordena_por_peso(v2, n2); //recursividade
    merge(v1, n1, v2, n2, animais);
}


int main() {
    Animal animais[MAX];
    printf("*** CADASTRO ***\n");
    cadastra_animais(animais, MAX);
    exibe_animais(animais, MAX);
    printf("*** ANIMAL MAIS VELHO ***\n");
    exibe_mais_velho(animais, MAX);
    printf("*** ORDENADO POR PESO - DECRESCENTE\n");
    ordena_por_peso(animais, MAX);
    exibe_animais(animais, MAX);
    return 0;
}