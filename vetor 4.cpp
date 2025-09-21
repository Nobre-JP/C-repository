#include <stdio.h>

int main()
{
    int A[20], B[20], C[20];

    for(int i=0; i<20; i++){
        printf("Digite o %dº elemento para o vetor A: ", i+1);
        scanf("%d", &A[i]);
        printf("Digite o %dº elemento para o vetor B: ", i+1);
        scanf("%d", &B[i]);
    }

    for(int i=0; i<20; i++){
        C[i] = A[i] - B[i];
    }

    printf("Vetor C:\n");
    for(int i=0; i<20; i++){
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
