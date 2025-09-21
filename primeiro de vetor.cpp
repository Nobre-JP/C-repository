#include<stdio.h>

int main(void){
	
	int V1[4] = {0, 1, 2, 3};
	int V2[4] = {4, 5, 6, 7};
	int troca[4];
	
	for(int i= 0; i<4; i++){
		
		printf("O %d valor do vetor 1 é de: ", i+1);
		printf("%d \n", V1[i]);
	}
	for(int b= 0; b<4; b++){
		
		printf("O %d valor do vetor 2 é de: ", b+1);
		printf("%d \n", V2[b]);
	}
	
	for(int a= 0; a<4; a++){
	troca[a] = V1[a];
	V1[a] = V2[a];
	V2[a] = troca[a];
	}
	
	for(int i= 0; i<4; i++){
		
		printf("O %d valor do vetor 1 trocado é de: ", i+1);
		printf("%d \n", V1[i]);
	}
	for(int b= 0; b<4; b++){
		
		printf("O %d valor do vetor 2 trocado é de: ", b+1);
		printf("%d \n", V2[b]);
	}
	
}
