#include<stdio.h>



struct atleta{
	
	char nome[255];
	char esporte[255];
	int idade;
	float altura;
};
int main(void){
	
	struct atleta atletas[5];
	
	for (int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        fgets()
        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf("%s", atletas[i].esporte);
        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura do atleta %d (em metros): ", i + 1);
        scanf("%f", &atletas[i].altura);
    }
	
	struct atleta maioraltura;
	struct atleta maisvelho;
	for(int i= 1; i<5; ++){
		if(atletas[i].altura > maioraltura.altura){
			maioraltura = atletas[i];
		}
		if(atletas[i].idade>maisvelho.idade){
			maisvelho = atletas[i];
		}
	}
	printf("\nO atleta mais alto é: %s\n", maioraltura.nome);
    printf("O atleta mais velho é: %s\n", maisvelho.nome);
    return 0;
}
