#include <stdio.h>

int main(void){
	
	int V[20];
	
	for(int i = 0; i<20; i++){
		
		printf("Digite o %d valor do vetor: ", i+1);
		scanf("%d", &V[i]);
	}
	
	for(int x = 19; x>=0 ; x--){
	
		printf("%d \n", V[x]);
	}
	return 0;
}

