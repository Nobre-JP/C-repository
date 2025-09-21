#include <stdio.h>
#include <stdlib.h>


struct DadosContato {
    char endereco[100];
    char telefone[20];
    char dataNascimento[12]; 
};


struct Associado {
    char nome[50];
    int idade;
    int numeroCarteira;
    struct DadosContato contato;
};

int main() {
   
    int numAssociados = 50;
    
    struct Associado associados[numAssociados];
    
    
    for (int i = 0; i < numAssociados; i++) {
        printf("Associado %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", associados[i].nome);
        printf("Idade: ");
        scanf("%d", &associados[i].idade);
        printf("Número da carteira de sócio: ");
        scanf("%d", &associados[i].numeroCarteira);
        
       
        printf("Endereço: ");
        scanf("%s", associados[i].contato.endereco);
        printf("Telefone: ");
        scanf("%s", associados[i].contato.telefone);
        printf("Data de nascimento (dd/mm/aaaa): ");
        scanf("%s", associados[i].contato.dataNascimento);
    }
    
    
    printf("\nDados dos associados:\n");
    for (int i = 0; i < numAssociados; i++) {
        printf("Associado %d:\n", i + 1);
        printf("Nome: %s\n", associados[i].nome);
        printf("Idade: %d\n", associados[i].idade);
        printf("Número da carteira de sócio: %d\n", associados[i].numeroCarteira);
        printf("Endereço: %s\n", associados[i].contato.endereco);
        printf("Telefone: %s\n", associados[i].contato.telefone);
        printf("Data de nascimento: %s\n\n", associados[i].contato.dataNascimento);
    }
    
    return 0;
}

