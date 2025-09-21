#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DataNascimento {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    char nome[50];
    struct DataNascimento dataNascimento;
};

int main() {
    typedef struct Pessoa Pessoa;
    
    Pessoa pessoas[6];
    
    for (int i = 0; i < 6; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Data de Nascimento (dd mm aaaa): ");
        scanf("%d %d %d", &pessoas[i].dataNascimento.dia, &pessoas[i].dataNascimento.mes, &pessoas[i].dataNascimento.ano);
    }
    
    Pessoa maisNova = pessoas[0];
    Pessoa maisVelha = pessoas[0];
    
    for (int i = 1; i < 6; i++) {
        if (pessoas[i].dataNascimento.ano < maisNova.dataNascimento.ano ||
            (pessoas[i].dataNascimento.ano == maisNova.dataNascimento.ano &&
             (pessoas[i].dataNascimento.mes < maisNova.dataNascimento.mes ||
              (pessoas[i].dataNascimento.mes == maisNova.dataNascimento.mes &&
               pessoas[i].dataNascimento.dia < maisNova.dataNascimento.dia)))) {
            maisNova = pessoas[i];
        }
        
        if (pessoas[i].dataNascimento.ano > maisVelha.dataNascimento.ano ||
            (pessoas[i].dataNascimento.ano == maisVelha.dataNascimento.ano &&
             (pessoas[i].dataNascimento.mes > maisVelha.dataNascimento.mes ||
              (pessoas[i].dataNascimento.mes == maisVelha.dataNascimento.mes &&
               pessoas[i].dataNascimento.dia > maisVelha.dataNascimento.dia)))) {
            maisVelha = pessoas[i];
        }
    }
    
    printf("\nPessoa mais nova: %s\n", maisNova.nome);
    printf("Pessoa mais velha: %s\n", maisVelha.nome);
    
    return 0;
}

