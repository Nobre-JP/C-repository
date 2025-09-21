#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar os dados de um associado
struct Associado {
    char nome[50];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    float mensalidade;
    int qtdDependentes;
};

int main() {
    int numAssociados = 37;
    
    struct Associado associados[numAssociados];
    
    int maiorNumDependentes = 0;
    
    for (int i = 0; i < numAssociados; i++) {
        printf("Associado %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", associados[i].nome);
        printf("Dia de nascimento: ");
        scanf("%d", &associados[i].diaNascimento);
        printf("Mês de nascimento: ");
        scanf("%d", &associados[i].mesNascimento);
        printf("Ano de nascimento: ");
        scanf("%d", &associados[i].anoNascimento);
        printf("Valor da mensalidade: ");
        scanf("%f", &associados[i].mensalidade);
        printf("Quantidade de dependentes: ");
        scanf("%d", &associados[i].qtdDependentes);
        
        if (associados[i].qtdDependentes > maiorNumDependentes) {
            maiorNumDependentes = associados[i].qtdDependentes;
        }
    }
    
    printf("\nDados dos associados:\n");
    for (int i = 0; i < numAssociados; i++) {
        printf("Associado %d:\n", i + 1);
        printf("Nome: %s\n", associados[i].nome);
        printf("Data de nascimento: %d/%d/%d\n", associados[i].diaNascimento, associados[i].mesNascimento, associados[i].anoNascimento);
        printf("Valor da mensalidade: %.2f\n", associados[i].mensalidade);
        printf("Quantidade de dependentes: %d\n\n", associados[i].qtdDependentes);
    }
    
    printf("Associado(s) com o maior número de dependentes:\n");
    for (int i = 0; i < numAssociados; i++) {
        if (associados[i].qtdDependentes == maiorNumDependentes) {
            printf("Nome: %s\n", associados[i].nome);
        }
    }
    
    return 0;
}

