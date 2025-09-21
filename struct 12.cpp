#include<stdio.h>

struct jogador{
	
	char nome[255];
	int camisa;
	float peso;
	float altura;
};

struct jogador jogadores[22];

int main(void){

for(int i=0; i<22; i++){
	
	printf("Digite o nome do jogador %d: ", i+1);
	scanf("%s", jogadores[i].nome);
	printf("Digite o numero da camisa do jogador %d: ", i+1);
	scanf("%d", &jogadores[i].camisa);
	printf("Digite o peso do jogador %d: ", i+1);
	scanf("%f", &jogadores[i].peso);
	printf("Digite a altura do jogador %d: ", i+1);
	scanf("%f", &jogadores[i].altura);
}

printf("//////////Paysandu///////////\n");
printf("Nome do jogador////camisa////peso////altura////");

for(int x=0; x<22; x++){
	printf("%s////%i////%f////%f////\n", jogadores[x].nome, jogadores[x].camisa, jogadores[x].peso, jogadores[x].altura);
}
return 0;
}
