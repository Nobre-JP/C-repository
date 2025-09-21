#include <stdio.h>

int main(void){
	
	int A[3] = {1, 2, 3}, B[3] = {4, 5, 6}, C[6];
	
	for(int i = 0; i<3; i++){
		
		C[i] = A[i];
		C[i+3] = B[i];
	}
	for(int x = 0; x<6; x++){
		
		printf("o resultado de juntar os dois vetores e de: %d \n", C[x]);
	}
}

