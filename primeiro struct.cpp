#include <stdio.h>

struct ficha_aluno{
		char nome[255];
		int matricula;
		float nota1;
		float nota2;
		float media;
	} aluno;
int main(void){
	
	struct ficha_aluno A;

printf("Digite o seu nome: ");
fgets(A.nome, 255, stdin);

printf("Digite a sua matricula: ");
scanf("%d", &A.matricula);

printf("Digite a primeira nota: ");
scanf("%2f", &A.nota1);

printf("Digite a segunda nota: ");
scanf("%2f", &A.nota2);

A.media = (A.nota1+A.nota2)/2;

printf("\n Aluno: %s \n", A.nome);
printf("matricula: %d \n", A.matricula);
printf("Media de: %f \n", A.media);
}
