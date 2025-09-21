#include <stdio.h>
#include <string.h>
struct agenda{
	
	char nome[255];
	char sobrenome[255];
	int telefone1;
	int telefone2;
	
};

int main(void){
	
	agenda a[100];
	for(int i=0;i<100;i++){
	printf("Digite o nome do contato %d: ", i+1);
	fgets (a[i].nome, 255, stdin);
	printf("Digite o sobrenome do contato %d: " , i+1);
	fgets (a[i].sobrenome, 255, stdin);
	printf("Digite o telefone do contato %d: ", i+1);
	scanf("%d", &a[i].telefone1);
	printf("Digite o telefone fixo do contato %d: ", i+1);
	scanf("%d", &a[i].telefone2);
}
	printf("\n Agenda telefonica \n");
	
	for(int x=0;x<100;x++){
		
		printf("Nome: %s \n", a[x].nome);
		printf("Sobrenome: %s \n", a[x].sobrenome);
		printf("Telefone: %d \n", a[x].telefone1);
		printf("Telefone fixo : %d \n", a[x].telefone2);
	}
return 0;
}
