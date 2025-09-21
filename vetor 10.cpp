#include <Stdio.h>

int main(void){
	
	int numero, resultado, A[10];
	
	printf("Escreva um numero: ");
	scanf("%d", &numero);
	
	for(int i=1; i<=10; i++){
		
		resultado = numero+i;	
		A[i] = resultado;
	}
	
	for(int i=1; i<=10; i++){
		
		printf("A tabuada de %d e \n", numero);
		printf("%d + %d = %d", numero, i, A[i]);
		printf("\n");
	}
	return 0;
}
