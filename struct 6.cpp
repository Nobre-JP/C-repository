#include<stdio.h>

struct aluno{
	
	int matricula;
	char nome[255];
	float nota1;
	float nota2;
	float nota3;
	float resultado;
};

float media(float a, float b, float c){

    float resultado = (a+b+c)/3;
    return resultado;
}

int main(void){
	struct aluno aluno[3];
	
	for(int i=0;i<3;i++){
		
		printf("Digite o nome do aluno %d: ", i+1);
		scanf("%s", aluno[i].nome);
		printf("Digite a primeira nota do aluno %d: ", i+1);
		scanf("%f", &aluno[i].nota1);
		printf("Digite a segunda nota do aluno %d: ", i+1);
		scanf("%f", &aluno[i].nota2);
		printf("Digite a terceira nota do aluno %d: ", i+1);
		scanf("%f", &aluno[i].nota3);
	}
	for(int y=0;y<3;y++){
		
		aluno[y].resultado = media(aluno[y].nota1, aluno[y].nota2, aluno[y].nota3);
	}
	printf("Media de cada aluno: ");
	for(int a=0;a<3;a++){
		
		printf("\n%f \n", aluno[a].resultado);
	}
	struct aluno maiornota[3];
	for(int x=0;x<3;x++){
		if(aluno[x].resultado > maiornota[x].resultado){
			maiornota[x] = aluno[x];
		}
}
printf("\nA maior media foi de: %s", maiornota[3].nome);
}
