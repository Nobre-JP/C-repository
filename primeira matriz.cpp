#include<stdio.h>

int main(void){
	
	int M[2][2] = {{1,2}, {3,4}};
	int X[2][2] = {{5,6}, {7,8}};
	int resultado[2][2];
	for(int i= 0; i<2; i++){
		for(int j= 0; j<2; j++){
			
			resultado[i][j] = M[i][j] + X[i][j];
		}
	}
	printf("O resultado da soma das matrizes e de: ");	
	for(int a= 0; a<2; a++){
		for(int b = 0; b<2; b++){
		printf("%d ", resultado[a][b]);
		}
	}
	return 0;
}
