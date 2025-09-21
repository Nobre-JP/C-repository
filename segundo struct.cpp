#include<stdio.h>

struct pessoa{
	char nome[255];
	float altura;
	float peso;
	int cpf;
	char sexo[255];
};

int main(void){
	
	struct pessoa a;
	
	printf("Digite o seu nome: ");
    fgets(a.nome, 255, stdin);
	
	printf("Digite a sua altura: ");
	scanf("%f", &a.altura);
	
	printf("Digite o seu peso: ");
	scanf("%f", &a.peso);
	
	printf("Digite o seu cpf: ");
	scanf("%d", &a.cpf);
	
	printf("Digite o seu sexo: ");
    fgets(a.sexo, 255, stdin);
	
	printf("Nome: %s \n", a.nome);
	printf("Altura: %.2f \n", a.altura);
	printf("Peso: %.2f \n", a.peso);
	printf("CPF: %d \n", a.cpf);
	printf("Sexo: %s \n", a.sexo);
	
	return 0;
}
