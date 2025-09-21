#include <stdio.h>

int main(void){
	
	int A[15], B[15];
	
	for(int i=0; i<15; i++){
		
		printf("Digite o %dº valor do Vetor A \n", i+1);
		scanf("%d", &A[i]);
	}
	
	for(int i=0; i<15; i++){
		
		B[i] = A[i] * A[i];
	}
	for(int i=0; i<15; i++){
		
		printf("Os valores do vetor B sao: \n");
		
		printf("%d", B[i]);
		printf("\n");
	}
	return 0;
}

