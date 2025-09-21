#include<stdio.h>
#include<string.h>

struct atleta{
	
	char nome[255];
	char esporte[255];
	int idade;
	float altura;
};

int compararPorIdade(const void *a, const void *b) {
    return ((struct atleta *)b)->idade - ((struct atleta *)a)->idade;
}

int main(void){
	
	struct atleta atletas[3];
	
	for (int i = 0; i < 3; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf("%s", atletas[i].nome);
        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf("%s", atletas[i].esporte);
        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura do atleta %d (em metros): ", i + 1);
        scanf("%f", &atletas[i].altura);
    }
	
	struct atleta maioraltura[3];
	struct atleta maisvelho[3];
	for (int i= 0; i<3; i++){
		if(atletas[i].altura > maioraltura->altura){
			maioraltura[i] = atletas[i];
		}
		if(atletas[i].idade>maisvelho->idade){
			maisvelho[i] = atletas[i];
		}
	}
	qsort (atletas, 3, sizeof(struct atleta), compararPorIdade);
	
	printf("\nAtletas por ordem de idade (do mais velho para o mais novo):\n");
    for (int i = 0; i < 3; i++) {
        printf("\n Nome: %s", atletas[i].nome);
    }
    
    return 0;
	}

