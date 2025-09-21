#include <stdio.h>

int main(void){
	
	int A[2] = {1, 2}, B[2] = {3, 4}, C[2];
	
	for(int i= 0; i<2; i++){
		
		printf("O %d valor do vetor 1 é de: ", i+1);
		printf("%d \n", A[i]);
	}
	for(int b= 0; b<2; b++){
		
		printf("O %d valor do vetor 2 é de: ", b+1);
		printf("%d \n", B[b]);
	}
	for(int q = 0; q<2; q++){
	
	C[q] = A[q] + B[q];
}
	for(int x= 0; x<2; x++){
	printf("O resultado da soma entre os dois vetores e de: %d \n", C[x]);
}
	return 0;
}

