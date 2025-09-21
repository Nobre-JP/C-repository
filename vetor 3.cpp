#include <stdio.h>

int main()
{
    int A[8], B[8];

    for(int i=0; i<8; i++){
        printf("Digite um elemento para o vetor A: ");
        scanf("%d", &A[i]);
    }

    for(int i=0; i<8; i++){
        B[i] = A[i] * 3; 
    }

    printf("Vetor B:\n");
    for(int i=0; i<8; i++){
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}
