#include<stdio.h>

struct pessoa{
	char nome[100];
	int idade;
	char endereco[255];
};
int main(void){
	
	struct pessoa a;
	
	printf("Digite o seu nome: ");
	fgets(a.nome, 100, stdin);
	
	printf("Digite o seu endereco: ");
	fgets(a.endereco, 255, stdin);
	
	printf("Digite a sua idade: ");
	scanf("%d", &a.idade);
	
	printf("\nNome: %s", a.nome);
	printf("\nIdade: %d", a.idade);
	printf("\nEndereco: %s", a.endereco);
}
